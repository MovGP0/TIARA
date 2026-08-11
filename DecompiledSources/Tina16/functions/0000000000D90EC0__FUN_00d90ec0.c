/* Ghidra address: 00d90ec0 */
/* Ghidra symbol: FUN_00d90ec0 */


undefined8
FUN_00d90ec0(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
            undefined1 param_5,undefined8 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 local_30;
  
  uVar1 = *param_3;
  uVar3 = param_3[1];
  FUN_0040d200(param_6,0x10,0);
  lVar2 = *(longlong *)(param_1 + 0x18 + (uVar1 & 0xff) * 8);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_30 = (undefined4)(uVar1 >> 0x20);
    uVar4 = (**(code **)(lVar2 + 0x30))
                      (lVar2,param_1,param_2,local_30,(int)uVar3,param_4,param_5,param_6,0);
  }
  return uVar4;
}

