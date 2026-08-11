/* Ghidra address: 01c77050 */
/* Ghidra symbol: FUN_01c77050 */


void FUN_01c77050(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  local_38 = 0;
  cVar1 = FUN_01c8cee0(param_1);
  if ((cVar1 == '\0') || ((*PTR_DAT_02003b28 != '\0' && (*PTR_DAT_02001098 == '\0')))) {
    plVar3 = (longlong *)FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
    if (plVar3 == (longlong *)0x0) {
      local_30 = (longlong *)FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
      local_28 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),&local_30);
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01a982d0(uVar4,local_28 & 0xffffffff,local_28._4_4_,local_1c,&local_20);
      plVar3 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x27a8) + 0x58))
                         (*(longlong **)(param_1 + 0x27a8),local_1c[0],local_20);
    }
    if (plVar3 != (longlong *)0x0) {
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((sVar2 != 0x39) && ((*PTR_DAT_02002b78 != '\0' || (*PTR_DAT_02003720 != '\0')))) {
          uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
          FUN_013b1c30(uVar4,plVar3);
          goto LAB_01c7724a;
        }
      }
      FUN_0041ddd0(&local_38,PTR_PTR_02003828);
      local_30 = plVar3;
      uVar4 = FUN_017baf50(&local_30,0);
      FUN_017baeb0(&PTR_FUN_017bab40,local_38,*(undefined8 *)(param_1 + 0x27a8),uVar4);
      uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      cVar1 = (**(code **)(*plVar3 + 0x108))(plVar3,uVar4,param_2 == 0);
      if (cVar1 == '\0') {
        FUN_017baf30();
      }
      else {
        FUN_0199e310(*(undefined8 *)(param_1 + 0x27a8),1,1,0);
        FUN_017baf00();
        uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
        (**(code **)(*plVar3 + 0x120))(plVar3,uVar4);
      }
      if (*PTR_DAT_02005928 != '\0') {
        FUN_01c8d130(param_1,0);
      }
    }
  }
LAB_01c7724a:
  FUN_00414480(&local_38);
  return;
}

