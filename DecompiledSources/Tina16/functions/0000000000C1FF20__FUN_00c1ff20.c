/* Ghidra address: 00c1ff20 */
/* Ghidra symbol: FUN_00c1ff20 */


undefined1
FUN_00c1ff20(longlong param_1,uint param_2,uint param_3,uint param_4,byte *param_5,byte *param_6,
            byte *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  byte *local_58;
  byte *local_50;
  byte *local_48;
  undefined1 local_29;
  
  iVar3 = (param_2 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x878) + 100) / 200) * 4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xff < iVar3) {
    iVar3 = 0xff;
  }
  iVar1 = (param_3 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x880) + 100) / 200) * 4);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  iVar2 = (param_4 & 0xff) +
          *(int *)(param_1 + 0x418 + (longlong)((**(int **)(param_1 + 0x888) + 100) / 200) * 4);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0xff < iVar2) {
    iVar2 = 0xff;
  }
  local_58 = param_5;
  local_50 = param_6;
  local_48 = param_7;
  local_29 = FUN_00c1e220(param_1,iVar3,iVar1,iVar2);
  local_58 = *(byte **)(param_1 + 0x8c0);
  local_50._0_4_ = iVar3 - (uint)*param_5;
  FUN_00c1fdd0(auStack_78,*(undefined8 *)(param_1 + 0x878),*(undefined8 *)(param_1 + 0x890),
               *(undefined8 *)(param_1 + 0x8a8));
  local_58 = *(byte **)(param_1 + 0x8c8);
  local_50._0_4_ = iVar1 - (uint)*param_6;
  FUN_00c1fdd0(auStack_78,*(undefined8 *)(param_1 + 0x880),*(undefined8 *)(param_1 + 0x898),
               *(undefined8 *)(param_1 + 0x8b0));
  local_58 = *(byte **)(param_1 + 0x8d0);
  local_50 = (byte *)CONCAT44(local_50._4_4_,iVar2 - (uint)*param_7);
  FUN_00c1fdd0(auStack_78,*(undefined8 *)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8a0),
               *(undefined8 *)(param_1 + 0x8b8));
  if (*(int *)(param_1 + 8) == 1) {
    *(longlong *)(param_1 + 0x878) = *(longlong *)(param_1 + 0x878) + 4;
    *(longlong *)(param_1 + 0x880) = *(longlong *)(param_1 + 0x880) + 4;
    *(longlong *)(param_1 + 0x888) = *(longlong *)(param_1 + 0x888) + 4;
    *(longlong *)(param_1 + 0x890) = *(longlong *)(param_1 + 0x890) + 4;
    *(longlong *)(param_1 + 0x898) = *(longlong *)(param_1 + 0x898) + 4;
    *(longlong *)(param_1 + 0x8a0) = *(longlong *)(param_1 + 0x8a0) + 4;
    *(longlong *)(param_1 + 0x8a8) = *(longlong *)(param_1 + 0x8a8) + 4;
    *(longlong *)(param_1 + 0x8b0) = *(longlong *)(param_1 + 0x8b0) + 4;
    *(longlong *)(param_1 + 0x8b8) = *(longlong *)(param_1 + 0x8b8) + 4;
    *(longlong *)(param_1 + 0x8c0) = *(longlong *)(param_1 + 0x8c0) + 4;
    *(longlong *)(param_1 + 0x8c8) = *(longlong *)(param_1 + 0x8c8) + 4;
    *(longlong *)(param_1 + 0x8d0) = *(longlong *)(param_1 + 0x8d0) + 4;
  }
  else {
    *(longlong *)(param_1 + 0x878) = *(longlong *)(param_1 + 0x878) + -4;
    *(longlong *)(param_1 + 0x880) = *(longlong *)(param_1 + 0x880) + -4;
    *(longlong *)(param_1 + 0x888) = *(longlong *)(param_1 + 0x888) + -4;
    *(longlong *)(param_1 + 0x890) = *(longlong *)(param_1 + 0x890) + -4;
    *(longlong *)(param_1 + 0x898) = *(longlong *)(param_1 + 0x898) + -4;
    *(longlong *)(param_1 + 0x8a0) = *(longlong *)(param_1 + 0x8a0) + -4;
    *(longlong *)(param_1 + 0x8a8) = *(longlong *)(param_1 + 0x8a8) + -4;
    *(longlong *)(param_1 + 0x8b0) = *(longlong *)(param_1 + 0x8b0) + -4;
    *(longlong *)(param_1 + 0x8b8) = *(longlong *)(param_1 + 0x8b8) + -4;
    *(longlong *)(param_1 + 0x8c0) = *(longlong *)(param_1 + 0x8c0) + -4;
    *(longlong *)(param_1 + 0x8c8) = *(longlong *)(param_1 + 0x8c8) + -4;
    *(longlong *)(param_1 + 0x8d0) = *(longlong *)(param_1 + 0x8d0) + -4;
  }
  return local_29;
}

