# Name: Ryan Sowa
# ID#: 260886668

# .bashrc

# Source global definitions
if [ -f /usr/socs/Profile ]; then
        . /usr/socs/Profile
fi

# User specific aliases and functions

# Weclome Message:
echo "Welcome $USER to SOCS Bash!"

# Alias ls-l-a to la
alias la='ls -la'

# Set history to 10
set history=10

# Set prompt to: your user name, current directory (dynamic)
export PS1='$USER $PWD '

# Who | grep one or more of your friends
who | grep Dma25

# Turn messaging off
mesg n
