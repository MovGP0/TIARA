/* Ghidra address: 00f63ea0 */
/* Ghidra symbol: FUN_00f63ea0 */


void FUN_00f63ea0(longlong param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  
  cVar1 = FUN_00f63cb0(param_1,param_5,param_6,&local_19);
  if ((cVar1 != '\0') && ((param_4 & 0x10) == 0)) {
    uVar2 = FUN_00f63da0(param_1,local_19,0,0,param_7);
    *(undefined8 *)(param_1 + 0x68) = 0x3ff0000000000000;
    FUN_00f653c0(param_1,*(undefined8 *)(param_1 + 0x90));
    FUN_00f6f900(uVar2,0x10);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x48),uVar2);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}

