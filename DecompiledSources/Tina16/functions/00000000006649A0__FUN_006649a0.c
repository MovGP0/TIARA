/* Ghidra address: 006649a0 */
/* Ghidra symbol: FUN_006649a0 */


void FUN_006649a0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [3];
  
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      local_20 = param_5;
      local_24 = param_4;
      lVar3 = FUN_00661cc0(param_1,&local_24,local_1c);
      if ((lVar3 != 0) && (local_1c[0] == 0x14)) {
        uVar1 = *(undefined8 *)(lVar3 + 8);
        cVar2 = FUN_004113d0(uVar1,&PTR_FUN_007ee548);
        if (cVar2 == '\0') {
          FUN_0064dbe0(uVar1,0);
        }
        else {
          FUN_00805200(uVar1);
        }
      }
    }
    else {
      FUN_00663ba0();
    }
  }
  return;
}

