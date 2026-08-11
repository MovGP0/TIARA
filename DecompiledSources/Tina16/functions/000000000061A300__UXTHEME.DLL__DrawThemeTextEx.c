/* Ghidra address: 0061a300 */
/* Ghidra symbol: UXTHEME.DLL::DrawThemeTextEx */


HRESULT __stdcall
DrawThemeTextEx(HTHEME hTheme,HDC hdc,int iPartId,int iStateId,LPCWSTR pszText,int cchText,
               DWORD dwTextFlags,LPRECT pRect,DTTOPTS *pOptions)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0061a300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = DrawThemeTextEx(hTheme,hdc,iPartId,iStateId,pszText,cchText,dwTextFlags,pRect,pOptions);
  return HVar1;
}

