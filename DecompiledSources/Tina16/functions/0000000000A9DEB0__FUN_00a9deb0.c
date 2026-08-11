/* Ghidra address: 00a9deb0 */
/* Ghidra symbol: FUN_00a9deb0 */


int FUN_00a9deb0(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ushort *local_28;
  ushort *local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = (ushort *)(*(longlong *)(param_1 + 0x70) + 0x398);
  if (*local_28 < 0x20) {
    bVar4 = (1 << ((byte)*local_28 & 0x1f) & 0x1f000cU) != 0;
  }
  else {
    bVar4 = false;
  }
  local_20 = local_28;
  if (bVar4) {
    FUN_00468530(&local_40,0xff439eb2,0xfffffffffffffffc);
    cVar2 = FUN_0046f320(local_20,&local_40);
    if (cVar2 != '\0') {
      local_54 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x7c);
      if (local_54 <= param_2) {
        local_54 = param_2;
      }
      goto code_r0x00a9e016;
    }
  }
  FUN_0046c3f0(&local_48,*(longlong *)(param_1 + 0x70) + 0x398);
  iVar3 = FUN_004170c0(&DAT_00a9e07c,local_48,1);
  if (iVar3 < 1) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x4cc);
  }
  else {
    FUN_00467e90(&local_50,*(longlong *)(param_1 + 0x70) + 0x398);
    iVar3 = FUN_00a61c40(local_50,0,*(undefined4 *)(param_1 + 0xa8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x44),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x48),0);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x7c);
  local_54 = iVar3 + iVar1;
  if (iVar3 + iVar1 <= iVar1) {
    local_54 = iVar1;
  }
code_r0x00a9e016:
  FUN_00414560(&local_50,2);
  FUN_00460ba0(&local_40);
  return local_54;
}

