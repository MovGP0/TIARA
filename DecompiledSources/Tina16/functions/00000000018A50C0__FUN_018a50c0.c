/* Ghidra address: 018a50c0 */
/* Ghidra symbol: FUN_018a50c0 */


void FUN_018a50c0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
  if (cVar2 == '\0') {
    cVar2 = FUN_00411580(*param_2,&PTR_FUN_018965d0);
    if (cVar2 != '\0') {
      cVar2 = *(char *)(param_2 + 3);
      local_40[0] = FUN_00498310(0,*(undefined4 *)((longlong)param_2 + 0x9c));
      uVar4 = FUN_0064d1f0(param_2,local_40);
      local_30 = uVar4;
      if (cVar2 == '\0') {
        local_30._4_4_ = (undefined4)(uVar4 >> 0x20);
        uVar1 = local_30._4_4_;
        (**(code **)(**(longlong **)(param_1 + 0x4d0) + 0xa8))
                  (*(longlong **)(param_1 + 0x4d0),uVar4 & 0xffffffff,uVar1);
      }
      else if (cVar2 == '\r') {
        FUN_018a4fe0(param_1,0);
      }
      else if (cVar2 == '\x0e') {
        FUN_018a4fe0(param_1,1);
      }
    }
  }
  else {
    cVar2 = *(char *)(param_2 + 3);
    cVar3 = '\0';
    if (cVar2 == '\x1f') {
      cVar3 = '\x01';
    }
    else if (cVar2 == ' ') {
      cVar3 = '\x02';
    }
    else if (cVar2 == '!') {
      cVar3 = '\0';
    }
    if (*(char *)(param_1 + 0x589) != cVar3) {
      FUN_018a7010(param_1,cVar3);
    }
  }
  return;
}

