/* Ghidra address: 0137e6a0 */
/* Ghidra symbol: FUN_0137e6a0 */


undefined4 FUN_0137e6a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_54;
  undefined8 local_50 [2];
  undefined4 local_3c [5];
  
  local_50[0] = 0;
  local_54 = 0xffffffff;
  if ((char)param_1[0x24] == '\0') {
    if (*(char *)((longlong)param_1 + 0x189) == '\0') {
      local_54 = 1;
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x189) = 0;
      if (((param_1[0x2b] != 0) && (param_1[1] != 0)) &&
         (*(char *)(*(longlong *)(param_1[0x2b] + 8) + 0x434) == '\x03')) {
        lVar2 = FUN_004095c0(0x100010);
        param_1[0x22] = lVar2;
        lVar2 = param_1[0x2b];
        if (*param_2 != 0) {
          FUN_01cc6030(*param_2);
        }
        uVar7 = 0;
        lVar3 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,8,1,0);
        *param_2 = lVar3;
        FUN_01cc6020(*param_2);
        FUN_01cc5c60(lVar2);
        do {
          lVar3 = FUN_01cc5cc0(lVar2);
          if (((lVar3 != 0) && (*(char *)(lVar3 + 0x3a) == '\x01')) &&
             (*(char *)(lVar3 + 0x18) != '\0')) {
            FUN_01cc0ae0(lVar3,local_50);
            cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_50[0],local_3c);
            if (cVar1 != '\0') {
              uVar4 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                                ((longlong *)param_1[1],local_3c[0]);
              plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_011051a8);
              uVar7 = uVar7 & 0xffffffffffffff00;
              uVar4 = FUN_01cc2930(*(undefined8 *)(*param_2 + 8),plVar5[1],2,1,uVar7,0,1,0);
              (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,*param_2);
              lVar6 = param_1[0x18];
              *(short *)(plVar5 + 0x1c) = (short)((int)lVar6 / 2);
              *(undefined1 *)((longlong)plVar5 + 0xe2) = 7;
              if (plVar5[0x1b] == 0) {
                lVar6 = FUN_004095c0((ulonglong)*(ushort *)(plVar5 + 0x1c) << 4,
                                     (longlong)(int)lVar6 % 2 & 0xffffffff);
                plVar5[0x1b] = lVar6;
              }
              else {
                FUN_00409620(plVar5 + 0x1b,(ulonglong)*(ushort *)(plVar5 + 0x1c) << 4);
              }
              FUN_0137dde0(param_1,lVar3,*param_2,plVar5[0x1b]);
            }
          }
        } while (lVar3 != 0);
        FUN_004095f0(param_1[0x22]);
        local_54 = 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x59) = 0;
    }
  }
  FUN_00414480(local_50);
  return local_54;
}

