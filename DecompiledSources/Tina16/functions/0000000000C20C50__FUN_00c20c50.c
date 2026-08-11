/* Ghidra address: 00c20c50 */
/* Ghidra symbol: FUN_00c20c50 */


undefined4
FUN_00c20c50(longlong param_1,uint param_2,uint param_3,uint param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  byte *local_48;
  byte *local_40;
  byte *local_38;
  
  iVar4 = (param_2 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x848) + 0x10) / 0x20) * 4);
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xff < iVar4) {
    iVar4 = 0xff;
  }
  iVar2 = (param_3 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x850) + 0x10) / 0x20) * 4);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  iVar3 = (param_4 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x858) + 0x10) / 0x20) * 4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  uVar1 = FUN_00c1e220(param_1,iVar4,iVar2,iVar3);
  FUN_00c20bc0(auStack_68,*(undefined8 *)(param_1 + 0x848),*(undefined8 *)(param_1 + 0x860),
               iVar4 - (uint)*param_5);
  FUN_00c20bc0(auStack_68,*(undefined8 *)(param_1 + 0x850),*(undefined8 *)(param_1 + 0x868),
               iVar2 - (uint)*param_6);
  FUN_00c20bc0(auStack_68,*(undefined8 *)(param_1 + 0x858),*(undefined8 *)(param_1 + 0x870),
               iVar3 - (uint)*param_7);
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x848) = *(longlong *)(param_1 + 0x848) + 4;
    *(longlong *)(param_1 + 0x850) = *(longlong *)(param_1 + 0x850) + 4;
    *(longlong *)(param_1 + 0x858) = *(longlong *)(param_1 + 0x858) + 4;
    *(longlong *)(param_1 + 0x860) = *(longlong *)(param_1 + 0x860) + 4;
    *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + 4;
    *(longlong *)(param_1 + 0x870) = *(longlong *)(param_1 + 0x870) + 4;
  }
  else {
    *(longlong *)(param_1 + 0x848) = *(longlong *)(param_1 + 0x848) + -4;
    *(longlong *)(param_1 + 0x850) = *(longlong *)(param_1 + 0x850) + -4;
    *(longlong *)(param_1 + 0x858) = *(longlong *)(param_1 + 0x858) + -4;
    *(longlong *)(param_1 + 0x860) = *(longlong *)(param_1 + 0x860) + -4;
    *(longlong *)(param_1 + 0x868) = *(longlong *)(param_1 + 0x868) + -4;
    *(longlong *)(param_1 + 0x870) = *(longlong *)(param_1 + 0x870) + -4;
  }
  return uVar1;
}

