/* Ghidra address: 005a1a00 */
/* Ghidra symbol: FUN_005a1a00 */


void FUN_005a1a00(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_020014f0);
    FUN_004134c0(uVar2);
  }
  else {
    local_18 = *param_3;
    local_20 = auStack_48;
    cVar1 = FUN_005a46d0(*(undefined8 *)(param_1 + 8),local_18,&local_10);
    if (cVar1 != '\0') {
      FUN_005a1be0(local_10,param_2,param_3);
    }
    if (param_4 != '\0') {
      FUN_00410f20(param_3);
    }
  }
  return;
}

