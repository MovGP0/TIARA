/* Ghidra address: 004c5e60 */
/* Ghidra symbol: FUN_004c5e60 */


bool FUN_004c5e60(longlong param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  iVar3 = FUN_0058ada0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8));
  if (*(char *)(param_1 + 0x7f) == '\0') {
    uVar5 = FUN_00460ba0(&local_30);
    cVar2 = FUN_004c5b80(param_1,uVar5);
    if (cVar2 == '\0') {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x24);
      if ((iVar1 == -0x80000000) || (iVar3 != iVar1)) {
        local_51 = false;
      }
      else {
        local_51 = true;
      }
    }
    else {
      cVar2 = FUN_0046c3d0(&local_30);
      if (cVar2 == '\0') {
        FUN_00468530(&local_50,iVar3,0xfffffffffffffffc);
        cVar2 = FUN_0046f320(&local_50,&local_30);
        if (cVar2 != '\0') {
          local_51 = true;
          goto code_r0x004c5f4d;
        }
      }
      local_51 = false;
    }
  }
  else {
    lVar4 = FUN_0058ada0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb8));
    local_51 = iVar3 == lVar4;
  }
code_r0x004c5f4d:
  FUN_00460ba0(&local_50);
  FUN_00460ba0(&local_30);
  return local_51;
}

