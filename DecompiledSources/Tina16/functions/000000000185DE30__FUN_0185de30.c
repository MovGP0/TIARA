/* Ghidra address: 0185de30 */
/* Ghidra symbol: FUN_0185de30 */


void FUN_0185de30(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if ((param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x38) + 0x10) <= param_2)) {
    FUN_01860ba0(0xf);
  }
  piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),param_2);
  iVar4 = *piVar2;
  if (iVar4 < 3) {
    iVar4 = 2;
  }
  else if (iVar4 < 5) {
    iVar4 = 4;
  }
  else if (iVar4 < 9) {
    iVar4 = 8;
  }
  else if (iVar4 < 0x11) {
    iVar4 = 0x10;
  }
  else if (iVar4 < 0x21) {
    iVar4 = 0x20;
  }
  else if (iVar4 < 0x41) {
    iVar4 = 0x40;
  }
  else if (iVar4 < 0x81) {
    iVar4 = 0x80;
  }
  else if (iVar4 < 0x101) {
    iVar4 = 0x100;
  }
  else {
    iVar4 = 0x100;
  }
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      iVar1 = piVar2[(longlong)iVar3 + 1];
      local_29 = (undefined1)iVar1;
      local_2a = (undefined1)((uint)iVar1 >> 8);
      local_2b = (undefined1)((uint)iVar1 >> 0x10);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_29,1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_2a,1);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),&local_2b,1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

