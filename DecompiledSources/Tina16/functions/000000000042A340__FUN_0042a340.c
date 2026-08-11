/* Ghidra address: 0042a340 */
/* Ghidra symbol: FUN_0042a340 */


longlong FUN_0042a340(undefined4 *param_1,int *param_2,int *param_3,undefined4 *param_4,
                     undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = thunk_FUN_0413ebab(L"MouseZ",L"Magellan MSWHEEL");
  uVar1 = thunk_FUN_03ce67dd(L"MSWHEEL_ROLLMSG");
  *param_1 = uVar1;
  iVar2 = thunk_FUN_03ce67dd(L"MSH_WHEELSUPPORT_MSG");
  *param_2 = iVar2;
  iVar2 = thunk_FUN_03ce67dd(L"MSH_SCROLL_LINES_MSG");
  *param_3 = iVar2;
  if ((*param_2 == 0) || (lVar3 == 0)) {
    *param_4 = 0;
  }
  else {
    uVar1 = thunk_FUN_041b2403(lVar3,*param_2,0,0);
    *param_4 = uVar1;
  }
  if ((*param_3 == 0) || (lVar3 == 0)) {
    *param_5 = 3;
  }
  else {
    uVar1 = thunk_FUN_041b2403(lVar3,*param_3,0,0);
    *param_5 = uVar1;
  }
  return lVar3;
}

