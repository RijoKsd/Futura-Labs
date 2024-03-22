const submitBtnEl = document.getElementById("submitBtn");
const emailEl = document.getElementById("email");
const passwordEl = document.getElementById("password");
const confirmPwd = document.getElementById("confirm-password");
let error = document.querySelector(".error");
let form = document.querySelector("form");

form.addEventListener("submit", (e) => {
  e.preventDefault();
  let emailRegex = /^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$/;
  if (emailEl.value === "" || passwordEl.value === "" || confirmPwd === "") {
    error.textContent = "Please fill out all fields";
    error.style.color = "red";
  } else if (!emailRegex.test(emailEl.value)) {
    error.textContent = "Please enter a valid email";
  } else if (passwordEl.value.length < 6) {
    error.textContent = "Password must be at least 6 characters";
  } else if (passwordEl.value === "password") {
    error.textContent = "Password cannot be password";
  } else {
    error.textContent = "";
  }

  if (passwordEl.value !== confirmPwd.value) {
    error.textContent = "Password does not match";
  }
});
