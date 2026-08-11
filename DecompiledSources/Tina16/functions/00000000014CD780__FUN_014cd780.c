/* Ghidra address: 014cd780 */
/* Ghidra symbol: FUN_014cd780 */


void FUN_014cd780(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40 [2];
  
  iVar6 = *(int *)(*param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(*param_2,iVar5);
      if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x04')) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((sVar2 == 0x39) && (cVar1 = FUN_01d04d40(plVar3), cVar1 != '\0')) &&
           (((cVar1 = (char)plVar3[0x34], cVar1 == '\x01' || (cVar1 == '\x02')) || (cVar1 == '\x04')
            ))) {
          if (((char)plVar3[0x34] == '\x01') && (*(longlong *)(plVar3[0x35] + 8) != 0)) {
            local_40[0] = *(undefined8 *)(plVar3[0x35] + 8);
            FUN_014cd780(param_1,local_40);
            *(undefined8 *)(plVar3[0x35] + 8) = local_40[0];
            FUN_014cd700(param_1,plVar3);
            uVar4 = (**(code **)*plVar3)(plVar3);
            FUN_00418590(uVar4,&DAT_01cf1390);
          }
          if (((char)plVar3[0x34] == '\x02') || ((char)plVar3[0x34] == '\x04')) {
            FUN_014cd700(param_1,plVar3);
            uVar4 = (**(code **)*plVar3)(plVar3);
            FUN_00418590(uVar4,&DAT_01cf1390);
          }
        }
        else {
          FUN_017ff610(plVar3);
          FUN_017ff650(plVar3);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00b95120(*param_2);
  *(undefined8 *)(*param_2 + 0xd8) = 0;
  *(undefined8 *)(*param_2 + 0x3d0) = 0;
  uVar4 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2);
  FUN_00418590(uVar4,&DAT_01984da0);
  *param_2 = 0;
  return;
}

