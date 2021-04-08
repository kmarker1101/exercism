(in-package #:cl-user)
(defpackage #:bob
  (:use #:cl)
  (:export #:response))
(in-package #:bob)

(defun shout-p (msg)
  (string= (string-upcase msg) msg))

(defun response (hey-bob))

