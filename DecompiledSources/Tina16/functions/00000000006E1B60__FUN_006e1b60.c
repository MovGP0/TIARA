/* Ghidra address: 006e1b60 */
/* Ghidra symbol: FUN_006e1b60 */


void FUN_006e1b60(longlong *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  undefined1 local_28 [24];
  
  local_30 = auStack_68;
  iVar1 = *param_2;
  if (0xb04d < iVar1) {
    if ((((iVar1 == 0xbd00) || (iVar1 == 0xbd02)) || (iVar1 == 0xbd04)) ||
       (puVar2 = auStack_68, iVar1 == 0xbd06)) {
      (**(code **)(*param_1 + 0x150))(param_1,param_2);
      return;
    }
    goto LAB_006e1cb6;
  }
  if (iVar1 == 0xb04d) {
    puVar2 = auStack_68;
    if ((char)param_1[0x9e] != '\0') {
      local_30 = auStack_68;
      thunk_FUN_03e49910(param_1[0x9a],local_28);
      thunk_FUN_0411b3be(0,param_1[0x9a],local_28,2);
      FUN_00648850(param_1[0x9a],local_28);
      *(undefined1 *)(param_1 + 0x9e) = 0;
      return;
    }
    goto LAB_006e1cb6;
  }
  if (iVar1 < 0x103) {
    if (iVar1 == 0x102) {
      local_30 = auStack_68;
      cVar3 = FUN_00659a70(param_1,param_2);
    }
    else {
      if (iVar1 == 0x100) goto LAB_006e1bf3;
      puVar2 = auStack_68;
      if (iVar1 != 0x101) goto LAB_006e1cb6;
LAB_006e1c27:
      local_30 = auStack_68;
      cVar3 = FUN_006598f0(param_1,param_2);
    }
  }
  else {
    if (iVar1 != 0x104) {
      puVar2 = auStack_68;
      if (iVar1 != 0x105) goto LAB_006e1cb6;
      goto LAB_006e1c27;
    }
LAB_006e1bf3:
    local_30 = auStack_68;
    cVar3 = FUN_00659750(param_1,param_2);
  }
  puVar2 = local_30;
  if (cVar3 != '\0') {
    return;
  }
LAB_006e1cb6:
  local_30 = puVar2;
  local_48 = *(undefined8 *)(param_2 + 4);
  uVar4 = thunk_FUN_03a65bf1(param_1[0x95],param_1[0x9a],*param_2,*(undefined8 *)(param_2 + 2));
  *(undefined8 *)(param_2 + 6) = uVar4;
  return;
}

