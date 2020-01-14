#include <cardgameplay.hpp>
#include "gameaction.cpp"

ACTION cardgameplay::login(name user) {
  require_auth(user);

  // Init the _message table
  //messages_table _messages(get_self(), get_self().value);

  // Find the record from _messages table
  auto user_iterator = _users.find(user.value);
  if (user_iterator == _users.end()) {
    // Create a message record if it does not exist
   user_iterator =  _users.emplace
   (user, [&](auto& new_user) {
     new_user.username = user;
     
  
    });
  }
}

