/* Ghidra address: 007082b0 */
/* Ghidra symbol: FUN_007082b0 */


void FUN_007082b0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_03e49910(*(longlong *)(param_1 + 0x48),&local_28);
    local_48 = local_28;
    local_44 = local_24;
    local_40 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0x10),&local_48);
    cVar1 = FUN_00709d80(param_1);
    if (cVar1 == '\0') {
      iVar2 = FUN_004230a0(&local_28);
      iVar3 = FUN_004230c0(&local_28);
      FUN_004238d0(local_38,local_40 & 0xffffffff,0,(int)local_40 + iVar2,local_40._4_4_ + iVar3 + 5
                  );
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_041543e0(uVar4,local_38,0,1);
    }
    else {
      iVar2 = FUN_004230a0(&local_28);
      FUN_004238d0(local_38,local_40 & 0xffffffff,local_40._4_4_ + -5,(int)local_40 + iVar2,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
      uVar4 = FUN_00786090(param_1);
      thunk_FUN_041543e0(uVar4,local_38,0,1);
    }
  }
  return;
}

