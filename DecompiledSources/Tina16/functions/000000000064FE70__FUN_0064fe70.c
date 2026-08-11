/* Ghidra address: 0064fe70 */
/* Ghidra symbol: FUN_0064fe70 */


void FUN_0064fe70(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 local_148 [256];
  uint local_48 [2];
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_38;
  
  if (((((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) &&
       (lVar4 = FUN_007f9b70(param_1,0), lVar4 != 0)) && (*(longlong *)(lVar4 + 0x510) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x510) + 0x50))
                        (*(longlong **)(lVar4 + 0x510),param_1,param_2), cVar2 != '\0')) {
    return;
  }
  if ((0xff < *param_2) && (*param_2 < 0x10a)) {
    plVar5 = (longlong *)FUN_007f9b70(param_1,1);
    if ((plVar5 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar5 + 0x2d8))(plVar5,param_1,param_2), cVar2 != '\0')) {
      return;
    }
    goto LAB_006501d4;
  }
  uVar1 = *param_2;
  if ((uVar1 < 0x200) || (0x20e < uVar1)) {
    if (uVar1 == 0xb00b) {
      FUN_0064d420(param_1,0xb00b,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    goto LAB_006501d4;
  }
  if (((*(uint *)(param_1 + 0x14) & 0x80) == 0) &&
     (((uVar1 == 0x203 || (uVar1 == 0x206)) || (uVar1 == 0x209)))) {
    *param_2 = *param_2 - 2;
  }
  uVar1 = *param_2;
  if ((int)uVar1 < 0x203) {
    if (uVar1 == 0x202) {
      *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffffe;
      goto LAB_006501d4;
    }
    if (uVar1 == 0x200) {
      FUN_0080e5c0(*(undefined8 *)PTR_DAT_02004030,param_1,param_2);
      goto LAB_006501d4;
    }
    if (uVar1 != 0x201) goto LAB_00650132;
  }
  else if (uVar1 != 0x203) {
    if (uVar1 == 0x207) {
      if ((((*(uint *)(param_1 + 0x14) & 0x80000) != 0) &&
          ((*(uint *)((longlong)param_1 + 0xa4) & 0x1200) == 0)) &&
         (cVar2 = FUN_00664d50(DAT_020122b8), cVar2 == '\0')) {
        FUN_00664c70(DAT_020122b8);
        cVar2 = '\0';
        plVar5 = *(longlong **)(DAT_020122b8 + 0x38);
        if (plVar5 != (longlong *)0x0) {
          cVar3 = FUN_004113d0(param_1,&PTR_FUN_00640c18);
          if (cVar3 == '\0') {
            if (param_1[0xf] == 0) {
              lVar4 = FUN_007f9b70(param_1,0);
              if (lVar4 != 0) {
                uVar6 = FUN_0065b870(lVar4);
                cVar2 = (**(code **)(**(longlong **)(DAT_020122b8 + 0x38) + 0x270))
                                  (*(longlong **)(DAT_020122b8 + 0x38),uVar6,param_1);
              }
            }
            else {
              uVar6 = FUN_0065b870(param_1[0xf]);
              cVar2 = (**(code **)(*plVar5 + 0x270))(plVar5,uVar6,param_1);
            }
          }
          else {
            uVar6 = FUN_0065b870(param_1);
            cVar2 = (**(code **)(*plVar5 + 0x270))(plVar5,uVar6,param_1);
          }
        }
        if (cVar2 == '\0') {
          if (*(longlong *)(DAT_020122b8 + 0x38) != 0) {
            FUN_00664e80(DAT_020122b8,0);
          }
        }
        else {
          param_2[6] = 1;
          param_2[7] = 0;
          FUN_0080e790(*(undefined8 *)PTR_DAT_02004030);
        }
      }
      goto LAB_006501d4;
    }
LAB_00650132:
    if (((*(char *)(DAT_020122b8 + 0x2c) != '\0') && (*(int *)(DAT_020122b8 + 0x28) != 0)) &&
       (*param_2 == *(uint *)(DAT_020122b8 + 0x28))) {
      thunk_FUN_041b3841(local_148);
      local_48[0] = *param_2;
      local_40 = FUN_007f99e0(local_148);
      local_3e = (undefined2)param_2[2];
      local_38 = FUN_004239b0(param_2[4]);
      pcVar7 = (code *)FUN_00411550(param_1,0xffc7);
      (*pcVar7)(param_1,local_48);
      return;
    }
    goto LAB_006501d4;
  }
  if (*(char *)((longlong)param_1 + 0xaf) == '\x01') {
    pcVar7 = (code *)FUN_00411550(param_1,0xffed);
    (*pcVar7)(param_1);
    return;
  }
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
LAB_006501d4:
  (**(code **)(*param_1 + -0x40))(param_1,param_2);
  return;
}

