/* Ghidra address: 00b29b20 */
/* Ghidra symbol: FUN_00b29b20 */


undefined4 FUN_00b29b20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00b28cf0(param_1);
  uVar3 = 0xffffffff;
  if ((short)uVar1 != -1) {
    uVar2 = FUN_00b288f0(*(undefined8 *)(param_1 + 0x18),param_2);
    uVar3 = 0xffffffff;
    if ((short)uVar2 != -1) {
      uVar3 = FUN_00b29a30(param_1,uVar1,uVar2,uVar2,1);
    }
  }
  return uVar3;
}

