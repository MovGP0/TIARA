/* Ghidra address: 0049f1b0 */
/* Ghidra symbol: FUN_0049f1b0 */


void FUN_0049f1b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00410ae0(param_2,&local_10);
  lVar1 = FUN_0049f000(param_1,local_10);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      if (DAT_02011620 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = DAT_02011620 + 0x10;
      }
      uVar2 = FUN_004e5fc0(&PTR_FUN_0049ad90,1,lVar1);
      *(undefined8 *)(param_1 + 8) = uVar2;
    }
    FUN_004e6500(*(undefined8 *)(param_1 + 8),local_10,param_2);
  }
  else if (lVar1 != param_2) {
    local_28 = local_10;
    local_20 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00471b40,1,PTR_PTR_02004268,&local_28,0);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_10);
  return;
}

