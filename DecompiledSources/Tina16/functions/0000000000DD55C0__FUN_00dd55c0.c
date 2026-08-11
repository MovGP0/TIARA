/* Ghidra address: 00dd55c0 */
/* Ghidra symbol: FUN_00dd55c0 */


void FUN_00dd55c0(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  cVar1 = (char)param_4;
  if (((cVar1 == '\x01') || (cVar1 == '\b')) || (cVar1 == '\x05')) {
    uVar2 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*param_1,param_1[1],0);
    if (*(int *)(param_1 + 0x30) < *(int *)(param_3 + 0x498)) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
      param_1[0x28] = param_1[0x29];
      param_1[0x2a] = param_1[0x2b];
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x498);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0x41dfffffffc00000;
  }
  else {
    dVar3 = (double)FUN_016ed780(param_3,param_4);
    uVar2 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*param_1,param_1[1],0);
    if (*(double *)(param_1 + 0x10) <= dVar3 && dVar3 != *(double *)(param_1 + 0x10)) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
      param_1[0x28] = param_1[0x29];
      param_1[0x2a] = param_1[0x2b];
    }
    *(double *)(param_1 + 0x10) = dVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return;
}

