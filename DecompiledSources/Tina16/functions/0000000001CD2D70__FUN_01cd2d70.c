/* Ghidra address: 01cd2d70 */
/* Ghidra symbol: FUN_01cd2d70 */


void FUN_01cd2d70(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_005fd6d0(param_4[0xf],2);
  uVar2 = FUN_01a90ee0(0x808080);
  FUN_005fd4e0(param_4[0xf],uVar2);
  FUN_005fd640(param_4[0xf],0xf);
  cVar1 = FUN_01cd6670(param_1);
  if ((byte)(cVar1 - 1U) == 0xff) {
    if ((*(int *)(param_1 + 0xe8) <= param_2) && (param_2 <= *(int *)(param_1 + 0xec))) {
      (**(code **)(*param_4 + 200))(param_4,param_2,*(undefined4 *)(param_1 + 0x18));
      iVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x94) * 1.1);
      (**(code **)(*param_4 + 0xc0))(param_4,param_2,*(int *)(param_1 + 0x18) + iVar3);
    }
    if ((*(int *)(param_1 + 0xe8) <= param_3) && (param_3 <= *(int *)(param_1 + 0xec))) {
      (**(code **)(*param_4 + 200))(param_4,param_3,*(undefined4 *)(param_1 + 0x18));
      iVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x94) * 1.1);
      (**(code **)(*param_4 + 0xc0))(param_4,param_3,*(int *)(param_1 + 0x18) + iVar3);
    }
  }
  else if ((byte)(cVar1 - 1U) < 2) {
    if ((*(int *)(param_1 + 0xec) <= param_2) && (param_2 <= *(int *)(param_1 + 0xe8))) {
      (**(code **)(*param_4 + 200))(param_4,*(undefined4 *)(param_1 + 0x1c),param_2);
      iVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x94) * 1.1);
      (**(code **)(*param_4 + 0xc0))(param_4,*(int *)(param_1 + 0x1c) - iVar3,param_2);
    }
    if ((*(int *)(param_1 + 0xec) <= param_3) && (param_3 <= *(int *)(param_1 + 0xe8))) {
      (**(code **)(*param_4 + 200))(param_4,*(undefined4 *)(param_1 + 0x1c),param_3);
      iVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x94) * 1.1);
      (**(code **)(*param_4 + 0xc0))(param_4,*(int *)(param_1 + 0x1c) - iVar3,param_3);
    }
  }
  return;
}

