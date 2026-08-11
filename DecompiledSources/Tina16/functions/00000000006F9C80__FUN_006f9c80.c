/* Ghidra address: 006f9c80 */
/* Ghidra symbol: FUN_006f9c80 */


void FUN_006f9c80(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_44 [12];
  undefined1 local_38 [4];
  undefined4 local_34;
  
  if (*(longlong *)(param_1 + 0x340) != 0) {
    if ((((*(char *)(param_1 + 0x33a) == '\x02') &&
         (*(char *)(*(longlong *)(param_1 + 0x340) + 0x4de) == '\0')) &&
        (*(char *)(*(longlong *)(param_1 + 0x340) + 0x621) == '\0')) &&
       (iVar2 = FUN_006d3e90(), iVar2 == 0x50050)) {
      uVar6 = *(undefined8 *)(param_1 + 0x310);
      if (*(char *)(param_1 + 0x31a) == '\0') {
        FUN_004238d0(local_38,*(int *)(param_1 + 0x98) + -0xe,1,*(int *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0x9c));
        uVar5 = FUN_005ffa40(uVar6);
        thunk_FUN_03998bad(uVar5,local_38,1,0xe);
        local_34 = 0;
        uVar6 = FUN_005ffa40(uVar6);
        thunk_FUN_03998bad(uVar6,local_38,6,1);
      }
      else {
        FUN_004238d0(local_38,*(int *)(param_1 + 0x98) + -0xd,0xffffffff,*(int *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0x9c));
        uVar5 = FUN_005ffa40(uVar6);
        thunk_FUN_03998bad(uVar5,local_38,10,0xe);
        uVar6 = FUN_005ffa40(uVar6);
        thunk_FUN_03998bad(uVar6,local_38,6,1);
      }
    }
    if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
      if (*(byte *)(param_1 + 0x33a) < 8) {
        bVar8 = ((int)CONCAT71((uint7)(byte)(*(ushort *)(param_1 + 0x34) >> 8),1) <<
                 (*(byte *)(param_1 + 0x33a) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        plVar7 = *(longlong **)(param_1 + 0x310);
        FUN_005fd670(plVar7[0xf],2);
        FUN_005fd640(plVar7[0xf],0xe);
        FUN_005fd4e0(plVar7[0xf],0xffd8ce);
        FUN_005fdcb0(plVar7[0x10],1);
        uVar3 = FUN_0064d0b0(param_1);
        uVar4 = FUN_0064d120(param_1);
        (**(code **)(*plVar7 + 0xf8))(plVar7,0,0,uVar3,uVar4);
      }
      else {
        if (*(char *)(*(longlong *)(param_1 + 0x340) + 0x4de) == '\0') {
          plVar7 = (longlong *)FUN_00777cd0();
          cVar1 = (**(code **)(*plVar7 + 0x98))(plVar7);
          if (cVar1 == '\0') {
            return;
          }
        }
        if (*(char *)(param_1 + 0x31a) == '\0') {
          FUN_004238d0(local_38,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c))
          ;
          plVar7 = (longlong *)FUN_00777cd0();
          cVar1 = (**(code **)(*plVar7 + 0x98))(plVar7);
          if (cVar1 == '\0') {
            uVar6 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
            thunk_FUN_03998bad(uVar6,local_38,4,0xf);
          }
          else {
            plVar7 = (longlong *)FUN_00777cd0();
            (**(code **)(*plVar7 + 0x200))(plVar7,local_44,3);
            uVar6 = FUN_00777cd0();
            uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x310));
            FUN_00778d10(uVar6,uVar5,local_44,local_38,1,0x100,0);
          }
        }
      }
    }
  }
  return;
}

