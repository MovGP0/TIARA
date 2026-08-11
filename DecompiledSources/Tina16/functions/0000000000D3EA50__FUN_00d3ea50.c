/* Ghidra address: 00d3ea50 */
/* Ghidra symbol: FUN_00d3ea50 */


ulonglong FUN_00d3ea50(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 unaff_RDI;
  undefined7 uVar8;
  ulonglong in_stack_ffffffffffffff98;
  undefined1 local_58 [20];
  undefined1 local_44 [16];
  undefined1 local_34 [20];
  
  FUN_004238d0(param_2,0,0,0,in_stack_ffffffffffffff98 & 0xffffffff00000000);
  uVar4 = FUN_00d3efa0(param_1);
  if ((uVar4 & 4) != 0) {
    uVar4 = FUN_00d3efa0(param_1);
    if ((uVar4 & 1) != 0) {
      cVar1 = FUN_00d3f270(param_1);
      if (cVar1 != '\x03') {
        cVar1 = FUN_00d3f270(param_1);
        if (cVar1 != '\x04') {
          cVar1 = FUN_00d3f270(param_1);
          if (cVar1 != '\x05') {
            cVar1 = FUN_00d3eda0(param_1);
            uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
            if (cVar1 == '\x02') {
              if ((*(int *)(param_1 + 0xc4) == 9) && (*(int *)(param_1 + 200) == 9)) {
                uVar7 = (undefined4)CONCAT71(uVar8,0x42);
              }
              else if (*(int *)(param_1 + 200) == 9) {
                uVar7 = (undefined4)CONCAT71(uVar8,0x41);
              }
              else if (*(char *)(param_1 + 0xc0) == '\0') {
                uVar7 = (undefined4)CONCAT71(uVar8,0x43);
              }
              else {
                uVar7 = (undefined4)CONCAT71(uVar8,0x40);
              }
            }
            else if ((*(int *)(param_1 + 0xc4) == 9) && (*(int *)(param_1 + 200) == 9)) {
              uVar7 = (undefined4)CONCAT71(uVar8,0x32);
            }
            else if (*(int *)(param_1 + 200) == 9) {
              uVar7 = (undefined4)CONCAT71(uVar8,0x31);
            }
            else if (*(char *)(param_1 + 0xc0) == '\0') {
              uVar7 = (undefined4)CONCAT71(uVar8,0x33);
            }
            else {
              uVar7 = (undefined4)CONCAT71(uVar8,0x30);
            }
            plVar5 = (longlong *)FUN_00781840();
            (**(code **)(*plVar5 + 0x228))(plVar5,local_34,uVar7);
            uVar6 = FUN_00781840();
            FUN_00d3e550(param_1,local_58);
            uVar4 = param_2;
            cVar1 = FUN_007790e0(uVar6,0,local_34,local_58,param_2);
            if (cVar1 == '\0') {
              FUN_004238d0(param_2,0,0,0,uVar4 & 0xffffffff00000000);
            }
            if (0 < *(int *)(param_1 + 0x114)) {
              iVar2 = FUN_004230c0(param_2);
              if (0 < iVar2) {
                FUN_00d3e550(param_1,local_44);
                iVar2 = FUN_004230c0(local_44);
                iVar3 = FUN_004230c0(param_2);
                FUN_00429ca0(param_2,0,(iVar2 - iVar3) / 2 - *(int *)(param_2 + 4));
              }
            }
          }
        }
      }
    }
  }
  return param_2;
}

