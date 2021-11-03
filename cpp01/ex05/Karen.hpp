#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class Karen {
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);

	private:
		typedef struct	s_karen {
			std::string	level;
			void	(Karen::*c)(void);
		}				t_karen;
		t_karen	kraken[4];
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif