/* Ghidra address: 0199e960 */
/* Ghidra symbol: FUN_0199e960 */


void FUN_0199e960(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_44;
  undefined1 local_40 [32];
  
  FUN_01996aa0(local_40,&PTR_FUN_01984b28,0,0,param_3,param_4);
  cVar1 = (**(code **)(*param_2 + 0x40))(param_2,local_40,&local_44);
  if (cVar1 == '\0') {
    *param_7 = 0xffffffff;
  }
  else if (param_5 < 0) {
    lVar3 = FUN_01996b70(param_2,local_44);
    *param_7 = *(undefined4 *)(lVar3 + 8);
    *param_8 = *(undefined4 *)(lVar3 + 0xc);
  }
  else {
    do {
      lVar3 = FUN_01996b70(param_2,local_44);
      local_44 = local_44 + 1;
      if ((int)param_2[2] <= local_44) break;
    } while ((param_5 != *(int *)(lVar3 + 8)) || (param_6 != *(int *)(lVar3 + 0xc)));
    if (local_44 < (int)param_2[2]) {
      lVar4 = FUN_01996b70(param_2,local_44);
      lVar5 = FUN_01996b70(param_2,local_44);
      iVar2 = FUN_01cefe00(*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x14),
                           *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(lVar5 + 0x14));
      if (iVar2 == 0) {
        lVar3 = FUN_01996b70(param_2,local_44);
        *param_7 = *(undefined4 *)(lVar3 + 8);
        *param_8 = *(undefined4 *)(lVar3 + 0xc);
        goto LAB_0199ea8d;
      }
    }
    *param_7 = 0xffffffff;
  }
LAB_0199ea8d:
  FUN_00b94db0(local_40);
  return;
}

