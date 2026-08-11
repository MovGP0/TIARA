/* Ghidra address: 01cffa40 */
/* Ghidra symbol: FUN_01cffa40 */


void FUN_01cffa40(longlong *param_1,char param_2)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  longlong *plVar6;
  short sVar7;
  short local_4c;
  short local_4a;
  char *local_48;
  char *local_40 [2];
  
  uVar1 = *(undefined2 *)((longlong)param_1 + 0xec);
  plVar6 = (longlong *)FUN_01d013c0(param_1,0);
  do {
    cVar3 = '\x01';
    sVar5 = 0;
    sVar7 = 0;
    bVar2 = false;
    while (cVar3 != '\0') {
      FUN_01d3d920(plVar6,param_2,sVar5,&local_4a);
      sVar5 = FUN_01d03160(plVar6);
      if (((sVar5 == 0x4b0) && (param_2 == '\x03')) && (local_4a == 0)) {
        FUN_01d3d920(plVar6,3,1,&local_4a);
      }
      cVar3 = FUN_01d3d920(param_1,param_2,sVar7,&local_4c);
      if (cVar3 != '\0') {
        (**(code **)(*plVar6 + 0x2d0))(plVar6,local_4a,local_40);
        cVar4 = (**(code **)(*param_1 + 0x2d0))(param_1,local_4c,&local_48);
        if (cVar4 == '\x02') {
          *(undefined2 *)local_40[0] = *(undefined2 *)local_48;
        }
        else if (cVar4 == '\x03') {
          sVar5 = FUN_01d03160(plVar6);
          if ((sVar5 != 0x45e) || (bVar2)) {
            sVar5 = FUN_01d03160(plVar6);
            if (sVar5 != 0x45e) goto LAB_01cffb89;
          }
          else {
LAB_01cffb89:
            *(undefined8 *)local_40[0] = *(undefined8 *)local_48;
          }
          bVar2 = true;
        }
        else if (cVar4 == '\b') {
          *local_40[0] = *local_48;
        }
        else if (cVar4 == '\t') {
          FUN_00415020(local_40[0],local_48,0x1e);
          if (*local_48 != '\0') {
            *(undefined2 *)(local_40[0] + 0x1f) = *(undefined2 *)(local_48 + 0x1f);
          }
        }
      }
      sVar5 = local_4a + 1;
      sVar7 = local_4c + 1;
    }
    FUN_01d018f0(param_1);
    plVar6 = (longlong *)FUN_01d013c0(param_1,0);
    if (plVar6 == (longlong *)0x0) {
      *(undefined2 *)((longlong)param_1 + 0xec) = uVar1;
      return;
    }
  } while( true );
}

