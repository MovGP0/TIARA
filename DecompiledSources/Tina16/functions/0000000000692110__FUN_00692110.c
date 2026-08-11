/* Ghidra address: 00692110 */
/* Ghidra symbol: FUN_00692110 */


void FUN_00692110(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar7;
  undefined1 local_58 [20];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [20];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  plVar3 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar3 + 0x90))(plVar3);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar2 != '\0') {
      lVar1 = param_1[2];
      pcVar4 = (code *)FUN_00411550(lVar1,0xffb0);
      cVar2 = (*pcVar4)(lVar1);
      if (cVar2 == '\0') {
        if ((char)param_1[7] == '\0') {
          cVar2 = (**(code **)(*(longlong *)param_1[2] + 0xf0))((longlong *)param_1[2]);
          if (cVar2 == '\0') {
            plVar3 = (longlong *)FUN_00777cd0();
            (**(code **)(*plVar3 + 0x118))(plVar3,local_34,0x18);
          }
          else {
            plVar3 = (longlong *)FUN_00777cd0();
            (**(code **)(*plVar3 + 0x118))(plVar3,local_34,0x15);
          }
        }
        else {
          plVar3 = (longlong *)FUN_00777cd0();
          (**(code **)(*plVar3 + 0x118))(plVar3,local_34,0x16);
        }
      }
      else {
        plVar3 = (longlong *)FUN_00777cd0();
        (**(code **)(*plVar3 + 0x118))(plVar3,local_34,0x17);
      }
      uVar5 = CONCAT44(uVar7,*(undefined4 *)(param_1[2] + 0x9c));
      FUN_004238d0(&local_44,0,0,*(undefined4 *)(param_1[2] + 0x98),uVar5);
      uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_00423b10(&local_44,0xfffffffe,0xfffffffe);
      uVar5 = FUN_005ffa40(param_2);
      uVar6 = CONCAT44(uVar7,local_38);
      thunk_FUN_041a27b3(uVar5,local_44,local_40,local_3c,uVar6);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar5 = FUN_00777cd0();
      uVar6 = FUN_005ffa40(param_2);
      FUN_004238d0(local_58,0,0,*(undefined4 *)(param_1[2] + 0x98),
                   CONCAT44(uVar7,*(undefined4 *)(param_1[2] + 0x9c)));
      FUN_00778dc0(uVar5,uVar6,local_34,local_58,0,0);
    }
  }
  return;
}

