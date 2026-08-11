/* Ghidra address: 007e8a10 */
/* Ghidra symbol: FUN_007e8a10 */


void FUN_007e8a10(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = param_2;
  local_2c = param_3;
  FUN_007e8b20(param_1,&local_30);
  FUN_007e8930(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1,param_1);
  FUN_007e44b0(param_1[0x10],0);
  FUN_007e51a0(param_1[0x10],0);
  FUN_007dde90(param_1[0x10]);
  FUN_007e6890(param_1);
  uVar4 = FUN_007e89a0(param_1);
  uVar2 = *(ushort *)(&DAT_01e13cb4 + (ulonglong)*(byte *)(param_1 + 0x1a) * 2 + (uVar4 & 0xff) * 6)
  ;
  uVar3 = *(ushort *)(&DAT_01e13cc0 + (ulonglong)*(byte *)(param_1 + 0x1c) * 2);
  bVar1 = *(byte *)((longlong)param_1 + 0xe1);
  uVar5 = FUN_007de060(param_1[0x10]);
  thunk_FUN_0412f5b0(uVar5,(uint)(uVar2 | uVar3) | (uint)bVar1 << 10,param_2,param_3,0,
                     *(undefined8 *)(DAT_020125c0 + 0x18),0);
  return;
}

