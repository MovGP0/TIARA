/* Ghidra address: 01991320 */
/* Ghidra symbol: FUN_01991320 */


void FUN_01991320(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (((param_2 != (longlong *)0x0) && ((undefined **)*param_2 == &PTR_FUN_017c0190)) &&
     ((((*(char *)(param_1 + 0xa8) != '\0' || (cVar2 = FUN_017c3740(param_2), cVar2 == '\0')) ||
       ((cVar2 = FUN_0198a580(*(undefined8 *)(param_1 + 0x98)), cVar2 == '\x05' &&
        (cVar2 = FUN_017c3740(*(undefined8 *)(param_1 + 0x98)), cVar2 != '\0')))) &&
      (cVar2 = FUN_017c25c0(param_2,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90))
      , cVar2 != '\0')))) {
    (**(code **)(*param_2 + 0x1f0))(param_2,0,param_1 + 0x5c,param_1 + 0x58);
    (**(code **)(*param_2 + 0x1f0))(param_2,1,param_1 + 0x54,param_1 + 0x50);
    iVar3 = FUN_01cefe00(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                         *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
    if ((iVar3 != 0) &&
       (iVar3 = FUN_01cefe00(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90),
                             *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50)),
       iVar3 != 0)) {
      *(undefined1 *)(param_1 + 0x4f) = 1;
      iVar3 = FUN_017c2460(param_2,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
      iVar3 = -(iVar3 + 1);
      uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        iVar4 = FUN_004aeba0(*(undefined8 *)(param_1 + 0xa0),param_2);
        if (iVar4 == -1) {
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa0),param_2);
        }
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x40));
      }
      cVar2 = FUN_017c3740(param_2);
      if ((((cVar2 != '\0') &&
           (cVar2 = FUN_0198a580(*(undefined8 *)(param_1 + 0x98)), cVar2 == '\x05')) &&
          (cVar2 = FUN_017c3740(*(undefined8 *)(param_1 + 0x98)), cVar2 != '\0')) ||
         (((cVar2 = FUN_017c3740(param_2), cVar2 == '\0' &&
           (cVar2 = FUN_0198a580(*(undefined8 *)(param_1 + 0x98)), cVar2 == '\x05')) &&
          (cVar2 = FUN_017c3740(*(undefined8 *)(param_1 + 0x98)), cVar2 == '\0')))) {
        lVar1 = *(longlong *)(param_1 + 0x98);
        if ((*(char *)(lVar1 + 0x2d8) == '\0') && ((char)param_2[0x5b] != '\0')) {
          FUN_00414ff0(lVar1 + 0x2d8,param_2 + 0x5b);
          *(undefined1 *)(lVar1 + 0x3d8) = 0;
        }
        else if (((char)param_2[0x5b] == '\0') &&
                (*(char *)(*(longlong *)(param_1 + 0x98) + 0x2d8) != '\0')) {
          FUN_00414ff0(param_2 + 0x5b,*(longlong *)(param_1 + 0x98) + 0x2d8);
          *(undefined1 *)(param_2 + 0x7b) = 0;
          FUN_00414ff0(*(longlong *)(param_1 + 0x40) + 0x2d8,*(longlong *)(param_1 + 0x98) + 0x2d8);
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x3d8) = 0;
      }
      iVar4 = FUN_017c2b70(param_2);
      iVar4 = iVar4 + -1;
      if (iVar3 + 1 <= iVar4) {
        iVar7 = ((iVar3 + 1) - iVar4) + -1;
        do {
          FUN_017c2da0(param_2,iVar4);
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
      }
      uVar5 = FUN_00b92120(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
      FUN_017c2d60(param_2,uVar5);
      uVar5 = FUN_00b92120(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
      FUN_017c2cc0(*(undefined8 *)(param_1 + 0x40),0,uVar5);
      if (0 < iVar3) {
        do {
          FUN_017c2da0(*(undefined8 *)(param_1 + 0x40),1);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      cVar2 = (**(code **)(*param_2 + 0xc0))(param_2);
      if (cVar2 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb0))
                  (*(longlong **)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210),0);
      }
      if (*(char *)((longlong)param_2 + 0xb) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 200))
                  (*(longlong **)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210),0xffffffff);
      }
      if ((char)param_2[1] != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0xa0))
                  (*(longlong **)(param_1 + 0x40),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x210));
      }
      FUN_019a53e0(*(undefined8 *)(param_1 + 0x80),param_2);
      FUN_019a53e0(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x40));
    }
  }
  return;
}

