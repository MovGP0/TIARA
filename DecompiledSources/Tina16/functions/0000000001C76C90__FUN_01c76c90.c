/* Ghidra address: 01c76c90 */
/* Ghidra symbol: FUN_01c76c90 */


void FUN_01c76c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  code *local_48;
  longlong local_40;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_58 = param_1;
  local_50 = param_2;
  if ((*(longlong *)(param_1 + 0x2768) == 0) ||
     (((cVar2 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar2 != '\x03' &&
       (cVar2 != '\x04')) || (*(longlong *)PTR_DAT_02005100 == 0)))) {
    cVar2 = FUN_01c8cee0(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_01c87d20(local_58);
      if (cVar2 == '\0') {
        local_40 = local_58;
        local_48 = FUN_01c76c90;
        FUN_00f836b0(&local_48);
      }
      else if (*PTR_DAT_020052b8 == '\0') {
        cVar2 = FUN_01993e20(*(undefined8 *)(local_58 + 0x27a8));
        if (cVar2 != '\0') {
          FUN_0199e310(*(undefined8 *)(local_58 + 0x27a8),0,1,0);
          if (local_50 == *(longlong *)(local_58 + 0x7a0)) {
            FUN_0041ddd0(local_30,PTR_PTR_02002758);
          }
          else {
            FUN_0041ddd0(local_30,PTR_PTR_02001448);
          }
          uVar5 = *(undefined8 *)(local_58 + 0x27a8);
          uVar4 = FUN_017bb120(uVar5);
          FUN_017baeb0(&PTR_FUN_017ba678,local_30[0],uVar5,uVar4);
        }
        if (*PTR_DAT_02003b28 != '\0') {
          lVar1 = *(longlong *)(local_58 + 0x27a8);
          iVar7 = *(int *)(lVar1 + 0x10);
          iVar6 = 0;
          if (-1 < iVar7 + -1) {
            do {
              uVar5 = FUN_00b94e60(lVar1,iVar6);
              FUN_01c76c50(auStack_78,uVar5);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        FUN_019946d0(*(undefined8 *)(local_58 + 0x27a8));
        FUN_017baf00();
      }
      else {
        plVar3 = (longlong *)FUN_01993ec0(*(undefined8 *)(local_58 + 0x27a8));
        if ((plVar3 != (longlong *)0x0) && (cVar2 = FUN_01d3bd80(plVar3), cVar2 != '\0')) {
          if ((*PTR_DAT_02003b28 != '\0') &&
             (cVar2 = (**(code **)(*plVar3 + 0x118))(plVar3), cVar2 != '\0')) {
            *(short *)PTR_DAT_02002200 = *(short *)PTR_DAT_02002200 + 1;
          }
          FUN_0199e310(*(undefined8 *)(local_58 + 0x27a8),0,1,0);
          FUN_019946d0(*(undefined8 *)(local_58 + 0x27a8));
        }
      }
    }
  }
  else {
    FUN_00c08110(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
  }
  FUN_00414480(local_30);
  return;
}

