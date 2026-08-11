/* Ghidra address: 00f149f0 */
/* Ghidra symbol: FUN_00f149f0 */


void FUN_00f149f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  iVar2 = -1;
  lVar8 = FUN_00f13040(param_1);
  if ((lVar8 == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) goto code_r0x00f159ee;
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x120))
            (*(longlong **)(param_1 + 0xf8),param_2,param_3);
  lVar8 = FUN_00f13040(param_1);
  uVar10 = *(int *)(param_1 + 200) - *(int *)(lVar8 + 200);
  uVar11 = (int)uVar10 >> 0x1f;
  if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
    lVar8 = FUN_00f13040(param_1);
    uVar10 = *(int *)(param_1 + 0xcc) - *(int *)(lVar8 + 0xcc);
    uVar11 = (int)uVar10 >> 0x1f;
    if (3 < (int)((uVar10 ^ uVar11) - uVar11)) goto LAB_00f14e2a;
    lVar8 = FUN_00f13040(param_1);
    lVar9 = FUN_00f13040(param_1);
    FUN_00c44460(local_98,*(undefined8 *)(lVar8 + 0xb8),*(undefined8 *)(lVar9 + 0xc0));
    dVar12 = (double)FUN_00c446d0(local_98);
    FUN_00c44460(local_98,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
    dVar13 = (double)FUN_00c446d0(local_98);
    dVar12 = (double)FUN_0040c850(dVar12 - dVar13);
    if (((*(char *)(param_1 + 0x9c) == '\x01') && (dVar12 < 3.141592653589793)) ||
       ((*(char *)(param_1 + 0x9c) == '\0' && (3.141592653589793 < dVar12)))) {
      dVar12 = 6.283185307179586 - dVar12;
    }
    local_68 = (double)*(int *)(param_1 + 200);
    local_60 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
    lVar8 = FUN_00f13040(param_1);
    lVar9 = FUN_00f13040(param_1);
    local_58 = (double)(*(int *)(lVar8 + 200) + *(int *)(lVar9 + 0xd0));
    local_50 = (double)*(int *)(param_1 + 200);
    local_88 = (double)*(int *)(param_1 + 0xcc);
    local_80 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
    lVar8 = FUN_00f13040(param_1);
    lVar9 = FUN_00f13040(param_1);
    local_78 = (double)(*(int *)(lVar8 + 0xcc) + *(int *)(lVar9 + 0xd4));
    local_70 = (double)*(int *)(param_1 + 0xcc);
    dVar13 = (double)FUN_00526f70(&local_68,3);
    iVar2 = FUN_0040c770((local_68 + dVar13) / 2.0);
    dVar13 = (double)FUN_00526f70(&local_88,3);
    iVar3 = FUN_0040c770((local_88 + dVar13) / 2.0);
    if (*(char *)(param_1 + 0x9c) == '\x01') {
      iVar2 = FUN_0040c770(local_68 * 2.0 - (double)iVar2);
      iVar3 = FUN_0040c770(local_88 * 2.0 - (double)iVar3);
    }
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    uVar4 = FUN_00f060d0(dVar12 * 57.29577951308232);
    FUN_00f05e70(&local_a0,dVar12 * 57.29577951308232,0x3ff0000000000000,0,2,uVar4);
    FUN_00416ad0(&local_a0,&LAB_00f15a98);
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_a0);
    plVar1 = *(longlong **)(param_1 + 0xf8);
    iVar5 = FUN_01a5ee60(plVar1,param_3);
    iVar6 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xf8),param_3);
    local_a8 = FUN_00498310(iVar2 - iVar5 / 2,iVar3 - iVar6 / 2);
    (**(code **)(*plVar1 + 200))(plVar1,&local_a8);
    iVar2 = -1;
  }
  else {
LAB_00f14e2a:
    lVar8 = FUN_00f13040(param_1);
    uVar10 = (*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0)) - *(int *)(lVar8 + 200);
    uVar11 = (int)uVar10 >> 0x1f;
    if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
      lVar8 = FUN_00f13040(param_1);
      uVar10 = (*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4)) - *(int *)(lVar8 + 0xcc);
      uVar11 = (int)uVar10 >> 0x1f;
      if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
        lVar8 = FUN_00f13040(param_1);
        lVar9 = FUN_00f13040(param_1);
        FUN_00c44460(local_98,*(undefined8 *)(lVar8 + 0xb8),*(undefined8 *)(lVar9 + 0xc0));
        dVar12 = (double)FUN_00c446d0(local_98);
        FUN_00c44460(local_98,*(ulonglong *)(param_1 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(param_1 + 0xc0) ^ 0x8000000000000000);
        dVar13 = (double)FUN_00c446d0(local_98);
        dVar12 = (double)FUN_0040c850(dVar12 - dVar13);
        if (((*(char *)(param_1 + 0x9c) == '\x01') && (dVar12 < 3.141592653589793)) ||
           ((*(char *)(param_1 + 0x9c) == '\0' && (3.141592653589793 < dVar12)))) {
          dVar12 = 6.283185307179586 - dVar12;
        }
        local_68 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
        local_60 = (double)*(int *)(param_1 + 200);
        lVar8 = FUN_00f13040(param_1);
        lVar9 = FUN_00f13040(param_1);
        local_58 = (double)(*(int *)(lVar8 + 200) + *(int *)(lVar9 + 0xd0));
        local_50 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
        local_88 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        local_80 = (double)*(int *)(param_1 + 0xcc);
        lVar8 = FUN_00f13040(param_1);
        lVar9 = FUN_00f13040(param_1);
        local_78 = (double)(*(int *)(lVar8 + 0xcc) + *(int *)(lVar9 + 0xd4));
        local_70 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        dVar13 = (double)FUN_00526f70(&local_68,3);
        iVar3 = FUN_0040c770((local_68 + dVar13) / 2.0);
        dVar13 = (double)FUN_00526f70(&local_88,3);
        iVar5 = FUN_0040c770((local_88 + dVar13) / 2.0);
        if (*(char *)(param_1 + 0x9c) == '\x01') {
          iVar3 = FUN_0040c770(local_68 * 2.0 - (double)iVar3);
          iVar5 = FUN_0040c770(local_88 * 2.0 - (double)iVar5);
        }
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x90))(plVar1);
        uVar4 = FUN_00f060d0(dVar12 * 57.29577951308232);
        FUN_00f05e70(&local_b0,dVar12 * 57.29577951308232,0x3ff0000000000000,0,2,uVar4);
        FUN_00416ad0(&local_b0,&LAB_00f15a98);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_b0);
        plVar1 = *(longlong **)(param_1 + 0xf8);
        iVar6 = FUN_01a5ee60(plVar1,param_3);
        iVar7 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xf8),param_3);
        local_a8 = FUN_00498310(iVar3 - iVar6 / 2,iVar5 - iVar7 / 2);
        (**(code **)(*plVar1 + 200))(plVar1,&local_a8);
        goto LAB_00f159ac;
      }
    }
    lVar8 = FUN_00f13040(param_1);
    lVar9 = FUN_00f13040(param_1);
    uVar10 = (*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0)) -
             (*(int *)(lVar8 + 200) + *(int *)(lVar9 + 0xd0));
    uVar11 = (int)uVar10 >> 0x1f;
    if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
      lVar8 = FUN_00f13040(param_1);
      lVar9 = FUN_00f13040(param_1);
      uVar10 = (*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4)) -
               (*(int *)(lVar8 + 0xcc) + *(int *)(lVar9 + 0xd4));
      uVar11 = (int)uVar10 >> 0x1f;
      if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
        lVar8 = FUN_00f13040(param_1);
        lVar9 = FUN_00f13040(param_1);
        FUN_00c44460(local_98,*(ulonglong *)(lVar8 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(lVar9 + 0xc0) ^ 0x8000000000000000);
        dVar12 = (double)FUN_00c446d0(local_98);
        FUN_00c44460(local_98,*(ulonglong *)(param_1 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(param_1 + 0xc0) ^ 0x8000000000000000);
        dVar13 = (double)FUN_00c446d0(local_98);
        dVar12 = (double)FUN_0040c850(dVar12 - dVar13);
        if (((*(char *)(param_1 + 0x9c) == '\x01') && (dVar12 < 3.141592653589793)) ||
           ((*(char *)(param_1 + 0x9c) == '\0' && (3.141592653589793 < dVar12)))) {
          dVar12 = 6.283185307179586 - dVar12;
        }
        local_68 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
        local_60 = (double)*(int *)(param_1 + 200);
        lVar8 = FUN_00f13040(param_1);
        local_58 = (double)*(int *)(lVar8 + 200);
        local_50 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
        local_88 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        local_80 = (double)*(int *)(param_1 + 0xcc);
        lVar8 = FUN_00f13040(param_1);
        local_78 = (double)*(int *)(lVar8 + 0xcc);
        local_70 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        dVar13 = (double)FUN_00526f70(&local_68,3);
        iVar3 = FUN_0040c770((local_68 + dVar13) / 2.0);
        dVar13 = (double)FUN_00526f70(&local_88,3);
        iVar5 = FUN_0040c770((local_88 + dVar13) / 2.0);
        if (*(char *)(param_1 + 0x9c) == '\x01') {
          iVar3 = FUN_0040c770(local_68 * 2.0 - (double)iVar3);
          iVar5 = FUN_0040c770(local_88 * 2.0 - (double)iVar5);
        }
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x90))(plVar1);
        uVar4 = FUN_00f060d0(dVar12 * 57.29577951308232);
        FUN_00f05e70(&local_b8,dVar12 * 57.29577951308232,0x3ff0000000000000,0,2,uVar4);
        FUN_00416ad0(&local_b8,&LAB_00f15a98);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_b8);
        plVar1 = *(longlong **)(param_1 + 0xf8);
        iVar6 = FUN_01a5ee60(plVar1,param_3);
        iVar7 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xf8),param_3);
        local_a8 = FUN_00498310(iVar3 - iVar6 / 2,iVar5 - iVar7 / 2);
        (**(code **)(*plVar1 + 200))(plVar1,&local_a8);
        goto LAB_00f159ac;
      }
    }
    lVar8 = FUN_00f13040(param_1);
    lVar9 = FUN_00f13040(param_1);
    uVar10 = *(int *)(param_1 + 200) - (*(int *)(lVar8 + 200) + *(int *)(lVar9 + 0xd0));
    uVar11 = (int)uVar10 >> 0x1f;
    if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
      lVar8 = FUN_00f13040(param_1);
      lVar9 = FUN_00f13040(param_1);
      uVar10 = *(int *)(param_1 + 0xcc) - (*(int *)(lVar8 + 0xcc) + *(int *)(lVar9 + 0xd4));
      uVar11 = (int)uVar10 >> 0x1f;
      if ((int)((uVar10 ^ uVar11) - uVar11) < 4) {
        lVar8 = FUN_00f13040(param_1);
        lVar9 = FUN_00f13040(param_1);
        FUN_00c44460(local_98,*(ulonglong *)(lVar8 + 0xb8) ^ 0x8000000000000000,
                     *(ulonglong *)(lVar9 + 0xc0) ^ 0x8000000000000000);
        dVar12 = (double)FUN_00c446d0(local_98);
        FUN_00c44460(local_98,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0));
        dVar13 = (double)FUN_00c446d0(local_98);
        dVar12 = (double)FUN_0040c850(dVar12 - dVar13);
        if (((*(char *)(param_1 + 0x9c) == '\x01') && (dVar12 < 3.141592653589793)) ||
           ((*(char *)(param_1 + 0x9c) == '\0' && (3.141592653589793 < dVar12)))) {
          dVar12 = 6.283185307179586 - dVar12;
        }
        local_68 = (double)*(int *)(param_1 + 200);
        local_60 = (double)(*(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0));
        lVar8 = FUN_00f13040(param_1);
        local_58 = (double)*(int *)(lVar8 + 200);
        local_50 = (double)*(int *)(param_1 + 200);
        local_88 = (double)*(int *)(param_1 + 0xcc);
        local_80 = (double)(*(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4));
        lVar8 = FUN_00f13040(param_1);
        local_78 = (double)*(int *)(lVar8 + 0xcc);
        local_70 = (double)*(int *)(param_1 + 0xcc);
        dVar13 = (double)FUN_00526f70(&local_68,3);
        iVar3 = FUN_0040c770((local_68 + dVar13) / 2.0);
        dVar13 = (double)FUN_00526f70(&local_88,3);
        iVar5 = FUN_0040c770((local_88 + dVar13) / 2.0);
        if (*(char *)(param_1 + 0x9c) == '\x01') {
          iVar3 = FUN_0040c770(local_68 * 2.0 - (double)iVar3);
          iVar5 = FUN_0040c770(local_88 * 2.0 - (double)iVar5);
        }
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x90))(plVar1);
        uVar4 = FUN_00f060d0(dVar12 * 57.29577951308232);
        FUN_00f05e70(&local_c0,dVar12 * 57.29577951308232,0x3ff0000000000000,0,2,uVar4);
        FUN_00416ad0(&local_c0,&LAB_00f15a98);
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x90) + 0xa0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_c0);
        plVar1 = *(longlong **)(param_1 + 0xf8);
        iVar6 = FUN_01a5ee60(plVar1,param_3);
        iVar7 = FUN_01a5eed0(*(undefined8 *)(param_1 + 0xf8),param_3);
        local_a8 = FUN_00498310(iVar3 - iVar6 / 2,iVar5 - iVar7 / 2);
        (**(code **)(*plVar1 + 200))(plVar1,&local_a8);
        goto LAB_00f159ac;
      }
    }
    iVar2 = 0;
  }
LAB_00f159ac:
  plVar1 = *(longlong **)(param_1 + 0xf8);
  *(undefined1 *)(plVar1 + 0x10) = 0;
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  if (iVar2 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x128))
              (*(longlong **)(param_1 + 0xf8),param_2,param_3);
  }
code_r0x00f159ee:
  FUN_00414560(&local_c0,3);
  FUN_00414480(&local_a0);
  return;
}

