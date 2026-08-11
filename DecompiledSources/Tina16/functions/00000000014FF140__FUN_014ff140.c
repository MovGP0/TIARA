/* Ghidra address: 014ff140 */
/* Ghidra symbol: FUN_014ff140 */


uint FUN_014ff140(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_24;
  undefined1 local_1d;
  undefined1 local_1c [4];
  
  _get_digital_node_value(*(undefined8 *)(param_1 + 0x798),param_2,&local_1d,&local_24,local_1c,0);
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_014fe1f0(param_2);
    uVar3 = FUN_01cc5a50(*(undefined8 *)PTR_DAT_02001440,uVar2,DAT_0210ec18);
    uVar3 = uVar3 & 0xff;
  }
  cVar1 = FUN_015f8ed0(local_24);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_3,&LAB_014ff1f8);
  }
  else {
    FUN_00414ad0(param_3,&DAT_014ff1e8);
    uVar3 = -uVar3 - 1;
  }
  return uVar3;
}

