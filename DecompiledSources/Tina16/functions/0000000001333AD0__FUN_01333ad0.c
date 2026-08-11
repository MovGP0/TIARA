/* Ghidra address: 01333ad0 */
/* Ghidra symbol: FUN_01333ad0 */


undefined8 FUN_01333ad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  short sVar2;
  short sVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [10];
  
  local_80[0] = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_98 = FUN_0132c700(*(undefined2 *)(param_1 + 0x28));
  local_88 = FUN_013331f0(param_1);
  local_a0 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
  local_a8 = FUN_0132def0(*(undefined2 *)(param_1 + 0x28),*(undefined2 *)(param_1 + 0x28));
  FUN_0132e440(local_a8);
  FUN_01332800(param_1);
  sVar3 = *(short *)(param_1 + 0x28);
  sVar2 = 0;
  do {
    dVar4 = (double)FUN_0132daf0(local_88,sVar2);
    dVar4 = *(double *)(param_1 + 0x48) * dVar4;
    dVar5 = (double)FUN_0040c850(dVar4);
    dVar6 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0x78),sVar2);
    if (dVar5 < dVar6) {
      dVar4 = (double)FUN_0132daf0(*(undefined8 *)(param_1 + 0x78),sVar2);
      FUN_0132daf0(local_88,sVar2);
      iVar1 = FUN_00c42630();
      dVar4 = dVar4 * (double)iVar1;
    }
    FUN_0132d960(local_80[0],param_2);
    dVar5 = (double)FUN_0132daf0(local_80[0],sVar2);
    FUN_0132dbe0(local_80[0],sVar2,dVar5 + dVar4);
    dVar4 = (double)FUN_0132daf0(local_80[0],sVar2);
    dVar5 = (double)FUN_0132daf0(param_2,sVar2);
    FUN_01332860(param_1);
    local_90 = FUN_013333e0(param_1,local_80[0]);
    local_98 = FUN_0132e6f0(&local_98,local_a0,sVar2);
    local_98 = FUN_0132cf10(local_98,local_90,param_3);
    FUN_0132d900(local_98,dVar4 - dVar5);
    FUN_0132cce0(&local_90);
    if (*(char *)(*(longlong *)(param_1 + 0x148) + 0x49c) == '\x01') break;
    sVar2 = sVar2 + 1;
    sVar3 = sVar3 + -1;
  } while (sVar3 != 0);
  local_a0 = FUN_0132ea10(local_a8,local_a0,&local_a0);
  FUN_0132cce0(local_80);
  FUN_0132cce0(&local_98);
  FUN_0132cce0(&local_88);
  FUN_0132e400(&local_a8);
  return local_a0;
}

