/* Ghidra address: 015f2650 */
/* Ghidra symbol: FUN_015f2650 */


undefined8 FUN_015f2650(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_48;
  undefined2 local_3a [5];
  char local_30;
  
  uVar3 = 0xffffffff;
  FUN_01d3d920(param_1,10,0,local_3a);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_3a[0],&local_48);
  if (cVar1 == '\n') {
    if (*(int *)(*(longlong *)(local_48 + 8) + 0x10) == 1) {
      lVar2 = FUN_01d3aab0(*(longlong *)(local_48 + 8),0);
      local_30 = (char)*(undefined8 *)(lVar2 + 8);
      if (local_30 == '\x01') {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

