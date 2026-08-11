/* Ghidra address: 015e3070 */
/* Ghidra symbol: FUN_015e3070 */


undefined1 FUN_015e3070(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  char local_1a [10];
  
  uVar2 = FUN_004b6da0(param_2);
  while( true ) {
    iVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_3,param_4);
    if (iVar1 == param_4) {
      return 1;
    }
    local_1a[0] = '\x01';
    (**(code **)(*param_1 + 0xf0))(param_1,0xffffffff,param_1[0x11],local_1a);
    if (local_1a[0] != '\0') break;
    FUN_004b6dc0(param_2,uVar2);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return 0;
}

