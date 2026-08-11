/* Ghidra address: 008117e0 */
/* Ghidra symbol: FUN_008117e0 */


int * FUN_008117e0(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  uint local_38;
  undefined8 local_20;
  
  local_5c = 0x3c;
  uVar3 = FUN_00786090(param_1);
  thunk_FUN_041c8200(uVar3,0xfffffffb,&local_5c);
  if ((local_38 & 0x8000) == 0) {
    local_20 = local_58;
    uVar3 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar3,&local_20);
    *(undefined8 *)param_2 = local_20;
    local_20 = local_50;
    uVar3 = FUN_00786090(param_1);
    thunk_FUN_0417e313(uVar3,&local_20);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,2);
    local_20 = CONCAT44(local_20._4_4_,*param_2 + iVar2);
    *(undefined8 *)(param_2 + 2) = local_20;
    cVar1 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
      if (cVar1 == '\0') {
        FUN_00423b50(param_2,1,1);
      }
      else {
        FUN_00423b50(param_2,2,2);
      }
    }
  }
  else {
    FUN_004238d0(param_2,0,0,0,0);
  }
  return param_2;
}

