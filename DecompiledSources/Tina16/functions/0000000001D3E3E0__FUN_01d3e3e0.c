/* Ghidra address: 01d3e3e0 */
/* Ghidra symbol: FUN_01d3e3e0 */


undefined4 FUN_01d3e3e0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong local_38;
  undefined2 local_2a [5];
  
  uVar2 = 0;
  FUN_01d3d920(param_1,0xe,0,local_2a);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_2a[0],&local_38);
  if (cVar1 == '\x0e') {
    if (param_2 == 1) {
      uVar2 = FUN_01d3c0f0(*(undefined8 *)(local_38 + 8));
    }
    else {
      uVar2 = FUN_01d3c0f0(*(undefined8 *)(local_38 + 0x10));
    }
  }
  return uVar2;
}

