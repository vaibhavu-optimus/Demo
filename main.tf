provider "aws" {
  region     = "us-east-1"
  access_key = "AKIAFAKEACCESSKEY12345"
  secret_key = "wJalrXUtnFEMI/K7MDENG/bPxRfiCYFAKEKEY"
}

resource "aws_s3_bucket" "example" {
  bucket = "my-terraform-test-bucket"

  tags = {
    Name        = "TestBucket"
    Environment = "Dev"
  }
}
