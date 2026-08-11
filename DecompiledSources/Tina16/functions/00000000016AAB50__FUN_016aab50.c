/* Ghidra address: 016aab50 */
/* Ghidra symbol: FUN_016aab50 */


longlong FUN_016aab50(undefined8 param_1,undefined4 param_2,int *param_3,undefined8 param_4,
                     undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_3 + 0x1a) == 0) {
    if (*param_3 == 9) {
      iVar1 = param_3[0x13];
      if (iVar1 == 0xc) {
        lVar3 = FUN_016aa1d0();
      }
      else if (iVar1 == 0x19) {
        lVar3 = FUN_016aa690();
      }
      else if (iVar1 == 0x18) {
        lVar3 = FUN_016aa670();
      }
      else {
        lVar3 = 0;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  else {
    plVar2 = *(longlong **)(param_3 + 0x1a);
    (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2,param_4,param_5);
    lVar3 = plVar2[1];
  }
  return lVar3;
}

