/* Ghidra address: 01acf0c0 */
/* Ghidra symbol: FUN_01acf0c0 */


void FUN_01acf0c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5,char param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_6 == '\0') {
    bVar1 = false;
    if (*(char *)(param_1 + 0xb0) == '\x01') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x90))
                        (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xa0))
                  (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80));
        bVar1 = false;
      }
      else {
        bVar1 = true;
        *param_4 = param_2;
        param_6 = '\x05';
      }
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0xa0))
                (*(longlong **)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80));
    }
    if ((bVar1) || (*(char *)(param_1 + 0xb0) != '\x01')) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xa0))
                (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x90))
                        (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xc0) + 0xa0))
                  (*(longlong **)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80));
      }
      else {
        bVar1 = true;
        *param_4 = param_2;
        param_6 = '\x05';
      }
    }
    if ((bVar1) || (*(char *)(param_1 + 0xb0) != '\x01')) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0xa0))
                (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0x90))
                        (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 200) + 0xa0))
                  (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0x80));
      }
      else {
        bVar1 = true;
        *param_5 = param_3;
        param_6 = '\x05';
      }
    }
    if ((bVar1) || (*(char *)(param_1 + 0xb0) != '\x01')) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xa0))
                (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80));
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x90))
                        (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xd0) + 0xa0))
                  (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80));
      }
      else {
        bVar1 = true;
        *param_5 = param_3;
        param_6 = '\x05';
      }
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x28))(*(longlong **)(param_1 + 0xe0));
    iVar6 = 1;
    if (0 < iVar3) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                          (*(longlong **)(param_1 + 0xe0),iVar6 + -1);
        plVar4 = (longlong *)FUN_004113f0(uVar5,&PTR_FUN_01d282a8);
        if (bVar1) {
          (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined8 *)(param_1 + 0x80));
        }
        else {
          cVar2 = (**(code **)(*plVar4 + 0x90))
                            (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
          if (cVar2 == '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined8 *)(param_1 + 0x80));
          }
          else {
            bVar1 = true;
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    plVar4 = *(longlong **)(param_1 + 0xf0);
    if (plVar4 != (longlong *)0x0) {
      if (bVar1) {
        (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined8 *)(param_1 + 0x80));
      }
      else {
        cVar2 = (**(code **)(*plVar4 + 0x90))
                          (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
        if (cVar2 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xa0))
                    (*(longlong **)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x80));
        }
        else {
          bVar1 = true;
          *param_4 = param_2;
          param_6 = '\x04';
        }
      }
    }
    plVar4 = *(longlong **)(param_1 + 0xf8);
    if (plVar4 != (longlong *)0x0) {
      if (bVar1) {
        (**(code **)(*plVar4 + 0xa0))(plVar4,*(undefined8 *)(param_1 + 0x80));
      }
      else {
        cVar2 = (**(code **)(*plVar4 + 0x90))
                          (plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3);
        if (cVar2 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0xf8) + 0xa0))
                    (*(longlong **)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80));
        }
        else {
          bVar1 = true;
          *param_5 = param_2;
          param_6 = '\x04';
        }
      }
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar6 = 1;
    if (0 < iVar3) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
        plVar4 = (longlong *)FUN_004113f0(uVar5,&DAT_01cdd500);
        if (bVar1) {
          (**(code **)(*plVar4 + 0x158))(plVar4,*(undefined8 *)(param_1 + 0x80),param_1 + 0x109);
        }
        else {
          FUN_01ce5440(plVar4,*(undefined8 *)(param_1 + 0x80),param_2,param_3,param_6,
                       param_1 + 0x109);
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01acef70(param_1);
  }
  else if (param_6 == '\x03') {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar6 = 1;
    if (0 < iVar3) {
      do {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
        uVar5 = FUN_004113f0(uVar5,&DAT_01cdd500);
        FUN_01ce5440(uVar5,*(undefined8 *)(param_1 + 0x80),param_2,param_3,3,param_1 + 0x109);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

