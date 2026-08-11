/* Ghidra address: 00629420 */
/* Ghidra symbol: FUN_00629420 */


int FUN_00629420(longlong param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                char *param_7,int param_8)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  iVar1 = -6;
  if ((((param_7 != (char *)0x0) && (param_8 == 0x58)) && (*param_7 == '1')) &&
     (iVar1 = -2, param_1 != 0)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    pcVar5 = *(code **)(param_1 + 0x30);
    if (pcVar5 == (code *)0x0) {
      pcVar5 = FUN_00634f40;
      *(code **)(param_1 + 0x30) = FUN_00634f40;
      *(undefined8 *)(param_1 + 0x40) = 0;
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x38);
    }
    if (lVar3 == 0) {
      *(undefined1 **)(param_1 + 0x38) = &LAB_00634f50;
    }
    uVar11 = 6;
    if (param_2 != 0xffffffff) {
      uVar11 = param_2;
    }
    if ((int)param_4 < 0) {
      uVar9 = -param_4;
      iVar10 = 0;
    }
    else {
      uVar9 = param_4 - 0x10;
      if ((int)param_4 < 0x10) {
        uVar9 = param_4;
      }
      iVar10 = (0xf < (int)param_4) + 1;
    }
    if ((((param_6 < 5) && (uVar11 < 10)) &&
        ((param_3 == 8 && ((param_5 - 1U < 9 && ((uVar9 & 0xfffffff8) == 8)))))) &&
       ((uVar9 != 8 || (iVar10 == 1)))) {
      uVar7 = 9;
      if (uVar9 != 8) {
        uVar7 = uVar9;
      }
      plVar2 = (longlong *)(*pcVar5)(*(undefined8 *)(param_1 + 0x40),1,0x1720);
      iVar1 = -4;
      if (plVar2 != (longlong *)0x0) {
        *(longlong **)(param_1 + 0x28) = plVar2;
        *plVar2 = param_1;
        *(undefined4 *)(plVar2 + 1) = 0x2a;
        *(int *)((longlong)plVar2 + 0x2c) = iVar10;
        plVar2[6] = 0;
        *(uint *)(plVar2 + 9) = uVar7;
        iVar6 = 1 << ((byte)uVar7 & 0x1f);
        *(int *)((longlong)plVar2 + 0x44) = iVar6;
        *(int *)((longlong)plVar2 + 0x4c) = iVar6 + -1;
        *(int *)(plVar2 + 0xf) = param_5 + 7;
        iVar10 = 1 << ((byte)(param_5 + 7) & 0x1f);
        *(int *)((longlong)plVar2 + 0x74) = iVar10;
        *(int *)((longlong)plVar2 + 0x7c) = iVar10 + -1;
        *(uint *)(plVar2 + 0x10) = (param_5 + 9U) / 3;
        lVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar6,2);
        plVar2[10] = lVar3;
        lVar3 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar2 + 0x44),
                           2);
        plVar2[0xc] = lVar3;
        lVar3 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar2 + 0x74),
                           2);
        plVar2[0xd] = lVar3;
        *(undefined4 *)(plVar2 + 0x2e3) = 0;
        iVar10 = 1 << ((char)param_5 + 6U & 0x1f);
        *(int *)(plVar2 + 0x2de) = iVar10;
        lVar3 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),iVar10,4);
        plVar2[2] = lVar3;
        uVar9 = *(uint *)(plVar2 + 0x2de);
        *(uint *)(plVar2 + 3) = uVar9 * 4;
        if ((((plVar2[10] == 0) || (plVar2[0xc] == 0)) || (lVar3 == 0)) || (plVar2[0xd] == 0)) {
          *(undefined4 *)(plVar2 + 1) = 0x29a;
          *(undefined **)(param_1 + 0x20) = PTR_s_insufficient_memory_01df58a0;
          FUN_006297a0(param_1);
        }
        else {
          plVar2[0x2df] = (ulonglong)(uVar9 & 0xfffffffe) + lVar3;
          plVar2[0x2dd] = (ulonglong)uVar9 * 3 + lVar3;
          *(uint *)((longlong)plVar2 + 0xac) = uVar11;
          *(uint *)(plVar2 + 0x16) = param_6;
          *(undefined1 *)((longlong)plVar2 + 0x3c) = 8;
          iVar1 = FUN_0062a220(param_1);
          if (iVar1 == 0) {
            lVar3 = *(longlong *)(param_1 + 0x28);
            *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x44) * 2;
            lVar4 = *(longlong *)(lVar3 + 0x68);
            uVar8 = (ulonglong)(*(int *)(lVar3 + 0x74) - 1);
            *(undefined2 *)(lVar4 + uVar8 * 2) = 0;
            iVar1 = 0;
            FUN_00626680(lVar4,0,uVar8 * 2);
            lVar4 = (longlong)*(int *)(lVar3 + 0xac) * 0x10;
            *(uint *)(lVar3 + 0xa8) = (uint)*(ushort *)(&DAT_01df1d52 + lVar4);
            *(uint *)(lVar3 + 0xb4) = (uint)*(ushort *)(&DAT_01df1d50 + lVar4);
            *(uint *)(lVar3 + 0xb8) = (uint)*(ushort *)(&DAT_01df1d54 + lVar4);
            *(uint *)(lVar3 + 0xa4) = (uint)*(ushort *)(&DAT_01df1d56 + lVar4);
            *(undefined8 *)(lVar3 + 0x84) = 0x200000000;
            *(undefined8 *)(lVar3 + 0x9c) = 0x200000000;
            *(undefined4 *)(lVar3 + 0x170c) = 0;
            *(undefined8 *)(lVar3 + 0x90) = 0;
            *(undefined4 *)(lVar3 + 0x70) = 0;
          }
        }
      }
    }
  }
  return iVar1;
}

