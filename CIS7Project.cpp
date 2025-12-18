// Yousuf Khan
// CIS-7-27452
// Case 2: UCR Medical Center Volunteers

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    // There will be options for 6 language with 11 countries for each
    double numLang = 6.0;
    double numCount = 11.0;
    
    string countries[6][11] = {
        {"United States", "United Kingdom", "New Zealand", "Australia", "Canada", "Jamaica", "Ghana", "Kenya", "Ireland", "Denmark", "Fiji"},
        {"Pakistan", "Nepal", "Bangladesh", "India", "United Arab Emirates", "Oman", "Bahrain", "Qatar", "Guyana", "Uganda", "Suriname"},
        {"Palestine", "Saudi Arabia", "Lebanon", "Syria", "Jordan", "Egypt", "Yemen", "Sudan", "Morocco", "Iraq", "Iran"},
        {"Venezuela", "Guatemala", "Dominican Republic", "Cuba", "Honduras", "Paraguay", "El Salvador", "Mexico", "Bolivia", "Argentina", "Ecuador"},
        {"Malaysia", "Taiwan", "Singapore", "China", "Macau", "Hong Kong", "Indonesia", "Philippines", "Brunei", "Thailand", "Palau"},
        {"France", "Chad", "Belgium", "Switzerland", "Haiti", "Democratic Republic of the Congo", "Luxemberg", "Monaco", "Madagascar", "Ivory Coast", "Guinea"}
    };
    
    // these are the integers that shall be used for user input
    int choiceOfLanguage;
    int choiceOfField;
    
    // First, the user will be greeted with an introduction.
    // Then, the program will ask the user for their fluent language.
    cout << "Hello! Thank you for volunteering for our medical center at the University of California Riverside." << endl;
    cout << "Please tell me, which language here are you the most fluent in?" << endl;
    cout << endl;
    
    // list of available languages
    cout << "English" << endl;
    cout << "Urdu" << endl;
    cout << "Arabic" << endl;
    cout << "Spanish" << endl;
    cout << "Mandarin" << endl;
    cout << "French" << endl;
    cout << endl;
    cin >> choiceOfLanguage;
    
    // Switch statements that will respond to user's input
    switch(choiceOfLanguage-1)
    {
        case 1:
        cout << "Thank you for choosing English!" << endl;
        break;
        
        case 2:
        cout << "Thank you for choosing Urdu!" << endl;
        break;
        
        case 3:
        cout << "Thank you for choosing Arabic!" << endl;
        break;
        
        case 4:
        cout << "Thank you for choosing Spanish!" << endl;
        break;
        
        case 5:
        cout << "Thank you for choosing Mandarin!" << endl;
        break;
        
        case 6:
        cout << "Thank you for choosing French!" << endl;
        break;
        
        default:
        cout << "I'm sorry, but your choice was invalid." << endl;
    }
    
    // Program will then allow the user to choose their field of interest
    cout << "Now, please elaborate on which field here you specialize in." << endl;
    cout << endl;
    
    // list of specialized fields and areas
    cout << "Aerospace Medicine" << endl;
    cout << "Cardiology" << endl;
    cout << "Dermatology" << endl;
    cout << "Geriatrics" << endl;
    cout << "Hematology" << endl;
    cout << "Internal Medicine" << endl;
    cout << "Medical Biochemistry" << endl;
    cout << endl;
    cin >> choiceOfField;
    
    // Switch statements that will respond to user's input
    switch(choiceOfField)
    {
        case 1:
        cout << "Thank you for choosing Aerospace Medicine!" << endl;
        break;
        
        case 2:
        cout << "Thank you for choosing Cardiology!" << endl;
        break;
        
        case 3:
        cout << "Thank you for choosing Dermatology!" << endl;
        break;
        
        case 4:
        cout << "Thank you for choosing Geriatrics!" << endl;
        break;
        
        case 5:
        cout << "Thank you for choosing Hematology!" << endl;
        break;
        
        case 6:
        cout << "Thank you for choosing Internal Medicine!" << endl;
        break;
        
        case 7:
        cout << "Thank you for choosing Medical Biochemistry!" << endl;
        break;
        
        default:
        cout << "I'm sorry, but your choice was invalid." << endl;
    }
    
    //  probability of participants matching based on language fluency and specialization
    double prob = numLang * numCount;
    double probability = (1 / prob) * 100;
    srand(time(0));
    int randomCountry = rand() % 11;
    
    // User will be assigned a random country.
    cout << endl;
    cout << countries[choiceOfLanguage-1][randomCountry] << " has been selected as your country." << endl;
    cout << endl;
    
    // Probability is printed here.
    cout << "Since there are 11 countries within each of the 6 languages, that means there are 66 countries total!" << endl;
    cout << "In that case, the probability of picking a language and a specialized field is about 1.52%." << endl;
    cout << "Or in simpler terms, 1/66." << endl;
}
