/* Ghidra address: 005ebde0 */
/* Ghidra symbol: FUN_005ebde0 */


undefined4
FUN_005ebde0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
            undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_res20 [2];
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  local_res20[0] = param_4;
  uVar4 = FUN_00416740(param_2);
  uVar3 = thunk_FUN_0419d678(*(undefined8 *)(param_1 + 8),uVar4,0,local_2c,param_3,local_res20);
  cVar1 = FUN_005ea620(param_1,uVar3);
  if (cVar1 == '\0') {
    local_40 = 0x11;
    local_48 = param_2;
    uVar4 = FUN_0044d8d0(&PTR_FUN_005e7568,1,PTR_PTR_02005c38,&local_48,param_3 & 0xffffffff00000000
                        );
    FUN_004134c0(uVar4);
  }
  uVar3 = local_res20[0];
  uVar2 = FUN_005ea250(local_2c[0]);
  *param_5 = uVar2;
  return uVar3;
}

