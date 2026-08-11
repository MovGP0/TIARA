/* Ghidra address: 0139cd60 */
/* Ghidra symbol: FUN_0139cd60 */


void FUN_0139cd60(undefined8 param_1,short param_2,undefined2 param_3,undefined2 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  short local_42;
  undefined2 local_40;
  undefined2 local_3e;
  int local_3c;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  
  plVar5 = (longlong *)0x0;
  lVar6 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar3 = *(int *)(lVar6 + 0x10);
  local_3c = 0;
  local_42 = param_2;
  local_40 = param_3;
  local_3e = param_4;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_00b94e60(lVar6,local_3c);
      cVar1 = FUN_0139cd00(auStack_88,uVar4);
      if (cVar1 != '\0') {
        plVar5 = (longlong *)FUN_00b94e60(lVar6,local_3c);
        break;
      }
      local_3c = local_3c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (plVar5 != (longlong *)0x0) {
    local_68 = local_2c;
    local_60 = local_30;
    local_58 = &local_31;
    iVar3 = FUN_0139b230(local_42,(longlong)plVar5 + 0xd1,(longlong)plVar5 + 0xd3,&local_32);
    if (0 < iVar3) {
      DAT_02108344 = '\0';
      uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
      local_68 = (undefined1 *)CONCAT62(local_68._2_6_,local_3e);
      local_60 = (undefined1 *)param_5;
      local_58 = (undefined1 *)param_6;
      FUN_01397a10(plVar5,uVar4,local_42,local_40);
      if ((((local_42 == 0x27) || (local_42 == 0x2e)) || (local_42 == 0xca)) || (local_42 == 0xd7))
      {
        *(undefined1 *)((longlong)plVar5 + 0x3d1) = 1;
      }
      sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((sVar2 == 0x3d) || (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x65)) ||
         ((sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x3e ||
          (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x66)))) {
        sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if ((sVar2 == 0x3e) || (sVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5), sVar2 == 0x66)) {
          if (DAT_02108344 != '\0') {
            uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
            (**(code **)(*(longlong *)plVar5[0x33] + 0xb0))
                      ((longlong *)plVar5[0x33],uVar4,*PTR_DAT_02002480,*PTR_DAT_02001560);
          }
        }
        else {
          if ((DAT_02108344 != '\0') &&
             (cVar1 = FUN_01aecdf0(*(undefined8 *)PTR_DAT_020041a8), cVar1 == '\0')) {
            lVar6 = FUN_019a4600();
            FUN_017d3880(*(undefined8 *)(lVar6 + 0x488));
          }
          uVar4 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
          (**(code **)(*(longlong *)plVar5[0x33] + 0xb0))
                    ((longlong *)plVar5[0x33],uVar4,*PTR_DAT_02002480,*PTR_DAT_02001560);
        }
      }
    }
  }
  return;
}

