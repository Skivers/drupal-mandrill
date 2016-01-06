<?php

function skivers_mandrill_sent_message($type, $user_from, $user_to)
{
	if ($type == "skivers_message") {
		$message = ' <h1 style="color:orange">Message</h1>'
			. 'Hi ' . ucfirst($user_to) . ',<br/>' .
			$user_from . ' has sent you a message, please  <a href="#"> here </a>
                    to login and view your message <br/><br/>
                    Kind regards <br/>
              Team UK
                ';
		return $message;
	}
}
