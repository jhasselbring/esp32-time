#define uS_TO_S_FACTOR 1000000
#define mS_TO_S_FACTOR 1000

class Time
{
public:
    int uSeconds(int s)
    {
        return s * uS_TO_S_FACTOR;
    }

    int uMinutes(int min)
    {
        return uSeconds(min * 60);
    }

    int uHours(int hrs)
    {
        return uMinutes(hrs * 60);
    }

    int uDays(int days)
    {
        return uHours(days * 24);
    }

    int uWeeks(int weeks)
    {
        return uDays(weeks * 7);
    }

    int uMonths(int months)
    {
        return uDays(months * 30.5);
    }
    int uYears(int years)
    {
        return uDays(years * 365);
    }

    int mSeconds(int s)
    {
        return s * mS_TO_S_FACTOR;
    }

    int mMinutes(int min)
    {
        return mSeconds(min * 60);
    }

    int mHours(int hrs)
    {
        return mMinutes(hrs * 60);
    }

    int mDays(int days)
    {
        return mHours(days * 24);
    }

    int mWeeks(int weeks)
    {
        return mDays(weeks * 7);
    }

    int mMonths(int months)
    {
        return mDays(months * 30.5);
    }
    int mYears(int years)
    {
        return mDays(years * 365);
    }
};