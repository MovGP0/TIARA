/* Ghidra address: 00cf9f70 */
/* Ghidra symbol: FUN_00cf9f70 */


undefined4
FUN_00cf9f70(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *local_130;
  undefined1 local_128 [48];
  code *local_f8;
  undefined4 local_2c;
  
  if ((char)param_1[4] == '\0') {
    local_130 = (longlong *)0x0;
    param_3 = 0;
  }
  else {
    local_130 = param_1 + 2;
  }
  uVar2 = FUN_00cf9c70(param_1[1]);
  uVar3 = FUN_00416740(param_2);
  uVar1 = (**(code **)(*param_1 + 8))(param_1);
  FUN_00cf8f40(DAT_01eb2478,local_128);
  uVar1 = (*local_f8)(uVar2,local_130,uVar3,uVar1,0,0x10,param_3,0,param_1 + 2,param_4,&local_2c,
                      param_1 + 5);
  FUN_00cf9f00(param_1,uVar1,L"InitializeSecurityContextW",param_5,param_6);
  (**(code **)(*param_1 + 0x10))(param_1,local_2c);
  return uVar1;
}

