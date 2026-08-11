/* Ghidra address: 01be3130 */
/* Ghidra symbol: FUN_01be3130 */


void FUN_01be3130(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_30 [2];
  
  lVar3 = FUN_01be2c50(param_1,param_2);
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_2 + 8);
    if (iVar1 == 0x200) {
      cVar2 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8);
      if (cVar2 != '\0') {
        lVar3 = thunk_FUN_04129e10(*(undefined8 *)(param_2 + 0x24));
        uVar4 = FUN_01be0910(*(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x648));
        lVar5 = FUN_0065b870(uVar4);
        if ((lVar3 != lVar5) && (lVar3 = FUN_007f9b70(param_1,1), lVar3 != 0)) {
          local_30[0] = FUN_0064d3a0(param_1,param_2 + 0x24);
          lVar3 = FUN_00656230(lVar3,local_30,0,1,0);
          if ((lVar3 != 0) &&
             ((cVar2 = FUN_004113d0(lVar3,&PTR_FUN_01bf3cc0), cVar2 != '\0' ||
              (cVar2 = FUN_004113d0(lVar3,&PTR_FUN_01bf4f40), cVar2 != '\0')))) {
            (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x408))(*(longlong **)(param_1 + 0x5d0))
            ;
          }
        }
      }
    }
    else if ((((iVar1 == 0x201) || (iVar1 - 0x203U < 2)) || (iVar1 - 0x206U < 2)) &&
            (((*(ushort *)(param_1 + 0x34) & 0x10) != 0 ||
             (cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x5d0),&PTR_FUN_01bdd620),
             cVar2 != '\0')))) {
      (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x408))(*(longlong **)(param_1 + 0x5d0));
    }
  }
  thunk_FUN_040da573(param_2);
  return;
}

