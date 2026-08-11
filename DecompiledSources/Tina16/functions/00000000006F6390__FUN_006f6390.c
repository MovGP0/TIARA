/* Ghidra address: 006f6390 */
/* Ghidra symbol: FUN_006f6390 */


void FUN_006f6390(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  FUN_0065a5b0(param_1,param_2);
  lVar7 = *(longlong *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 8);
  if (cVar2 == '\x01') {
    (**(code **)(**(longlong **)(lVar7 + 8) + 0x30))(*(longlong **)(lVar7 + 8));
    lVar6 = FUN_006f7090(param_1);
    param_1[0xaa] = lVar6;
    FUN_006f70d0(param_1,0);
    (**(code **)(*param_1 + 0x198))(param_1);
    (**(code **)(**(longlong **)(lVar7 + 8) + 0x40))(*(longlong **)(lVar7 + 8));
  }
  else if (cVar2 == '\x02') {
    uVar5 = FUN_0064d3a0(param_1,lVar7);
    local_30._4_4_ = (undefined4)(uVar5 >> 0x20);
    uVar1 = local_30._4_4_;
    local_30 = uVar5;
    FUN_006f6650(param_1,*(undefined8 *)(lVar7 + 8),uVar5 & 0xffffffff,uVar1,
                 *(longlong *)(param_2 + 0x18) != 0);
  }
  else if ((cVar2 == '\x03') && (param_1[0xaa] = 0, (char)param_1[0xa2] != '\0')) {
    if (*(byte *)((longlong)param_1 + 0x4a1) < 8 &&
        (1 << (*(byte *)((longlong)param_1 + 0x4a1) & 0x1f) & 3U) != 0) {
      local_38 = 0;
      local_34 = 0;
      lVar7 = FUN_006f7310(param_1,&local_38,4);
    }
    else {
      lVar7 = FUN_006f6920(param_1);
    }
    if (lVar7 != 0) {
      iVar3 = FUN_006ef6e0(lVar7);
      iVar4 = FUN_006efc30(param_1[0x9c]);
      if (iVar3 <= iVar4 + -1) {
        iVar4 = ((iVar4 + -1) - iVar3) + 1;
        do {
          uVar8 = FUN_006efcb0(param_1[0x9c],iVar3);
          cVar2 = FUN_006ef240(uVar8,1);
          if (cVar2 != '\0') {
            uVar8 = FUN_006efcb0(param_1[0x9c],iVar3);
            FUN_006ef2d0(uVar8,1,0);
            return;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}

