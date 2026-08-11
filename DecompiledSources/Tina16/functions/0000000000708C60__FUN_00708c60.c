/* Ghidra address: 00708c60 */
/* Ghidra symbol: FUN_00708c60 */


void FUN_00708c60(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  char local_19;
  
  local_19 = '\x01';
  iVar1 = *param_2;
  if (iVar1 < 0x203) {
    if (iVar1 == 0x202) {
      FUN_00708850(auStack_58,param_2);
    }
    else if (iVar1 == 0xf) {
      FUN_00708b20(auStack_58,param_2);
    }
    else if (iVar1 == 0x200) {
      FUN_00708900(auStack_58,param_2);
    }
    else if (iVar1 == 0x201) {
      FUN_00708830(auStack_58,param_2);
    }
  }
  else if (iVar1 == 0x203) {
    FUN_007086a0(auStack_58,param_2);
  }
  else if (iVar1 == 0x2a3) {
    FUN_00708ac0(auStack_58,param_2);
  }
  if (local_19 != '\0') {
    local_38 = *(undefined8 *)(param_2 + 4);
    uVar2 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x48),
                               *param_2,*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  return;
}

